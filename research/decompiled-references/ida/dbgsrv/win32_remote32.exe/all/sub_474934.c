/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474934
// Address: 0x00474934

//----- (00474934) --------------------------------------------------------
int __usercall sub_474934@<eax>(char a1@<bl>, int a2, _BYTE *a3, DWORD a4)
{
  _BYTE *v4; // edi
  int v6; // eax
  int v7; // edx
  DWORD *v8; // eax
  int *p_LastError; // esi
  int v10; // ecx
  void *v11; // ecx
  int *v12; // esi
  DWORD LastError; // [esp+Ch] [ebp-28h] BYREF
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  int v16; // [esp+18h] [ebp-1Ch]
  int v17; // [esp+1Ch] [ebp-18h]
  int v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+24h] [ebp-10h]
  LPCVOID lpBuffer; // [esp+28h] [ebp-Ch]
  int v21; // [esp+2Ch] [ebp-8h]
  DWORD nNumberOfBytesToWrite; // [esp+30h] [ebp-4h]

  nNumberOfBytesToWrite = a4;
  v4 = a3;
  lpBuffer = a3;
  if ( a4 )
  {
    if ( !a3 )
    {
LABEL_3:
      *sub_46B971() = 0;
      *sub_46B984() = 22;
      sub_467EF4(a1, (int)a3);
      return -1;
    }
    v6 = 56 * (a2 & 0x3F);
    v19 = a2 >> 6;
    v7 = (int)*(&dword_4B7B38 + (a2 >> 6));
    v21 = v6;
    a1 = *(_BYTE *)(v7 + v6 + 41);
    if ( a1 == 2 || a1 == 1 )
    {
      if ( (a4 & 1) != 0 )
        goto LABEL_3;
      v6 = v21;
    }
    if ( (*(_BYTE *)(v7 + v6 + 40) & 0x20) != 0 )
      sub_474CB1(a1, (int)a3, a2, 0, 0, 2u);
    if ( sub_4744DB(a1, (int)a3, a2) )
    {
      if ( !a1 )
      {
        v8 = sub_4740C7(&LastError, a2, a3, nNumberOfBytesToWrite);
        goto LABEL_15;
      }
      if ( (unsigned __int8)(a1 - 1) <= 1u )
      {
        v8 = sub_474473(&LastError, (unsigned int)a3, nNumberOfBytesToWrite);
LABEL_15:
        p_LastError = (int *)v8;
LABEL_28:
        v16 = *p_LastError;
        v12 = p_LastError + 1;
        v17 = *v12;
        v18 = v12[1];
        if ( v17 )
          return v17 - v18;
        if ( v16 )
        {
          if ( v16 == 5 )
          {
            *sub_46B984() = 9;
            *sub_46B971() = 5;
          }
          else
          {
            sub_46B94E(v16);
          }
          return -1;
        }
        v4 = lpBuffer;
      }
    }
    else
    {
      v10 = (int)*(&dword_4B7B38 + v19);
      if ( *(char *)(v10 + v21 + 40) >= 0 )
      {
        v11 = *(void **)(v10 + v21 + 24);
        LastError = 0;
        NumberOfBytesWritten = 0;
        v15 = 0;
        if ( !WriteFile(v11, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
          LastError = GetLastError();
        p_LastError = (int *)&LastError;
        goto LABEL_28;
      }
      switch ( a1 )
      {
        case 0:
          v8 = sub_47454C(&LastError, a2, (unsigned int)a3, nNumberOfBytesToWrite);
          goto LABEL_15;
        case 1:
          v8 = sub_474710(&LastError, a2, (unsigned int)a3, nNumberOfBytesToWrite);
          goto LABEL_15;
        case 2:
          v8 = sub_474627(&LastError, a2, (unsigned __int16 *)a3, nNumberOfBytesToWrite);
          goto LABEL_15;
      }
    }
    if ( (*((_BYTE *)&(*(&dword_4B7B38 + v19))[1].LockSemaphore + v21) & 0x40) == 0 || *v4 != 26 )
    {
      *sub_46B984() = 28;
      *sub_46B971() = 0;
      return -1;
    }
  }
  return 0;
}
