/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418A80
// Address: 0x00418A80

//----- (00418A80) --------------------------------------------------------
int __stdcall sub_418A80(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  _BYTE *v6; // edi
  _BYTE *v7; // eax
  int v8; // esi
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ebx
  void *v14; // [esp-4h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp+20h] [ebp-38h]
  int v16; // [esp+24h] [ebp-34h] BYREF
  int v17; // [esp+28h] [ebp-30h] BYREF
  int v18; // [esp+2Ch] [ebp-2Ch]
  int v19; // [esp+30h] [ebp-28h]
  int v20; // [esp+34h] [ebp-24h]
  void *v21; // [esp+38h] [ebp-20h]
  int v22; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  int v24; // [esp+44h] [ebp-14h]
  _DWORD *v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+54h] [ebp-4h]
  _DWORD v27[2]; // [esp+58h] [ebp+0h] BYREF
  int v28; // [esp+60h] [ebp+8h]
  CHAR MultiByteStr[260]; // [esp+7Ch] [ebp+24h] BYREF

  v3 = a2;
  v24 = a1;
  v25 = a2;
  CurrentProcessId = GetCurrentProcessId();
  if ( *a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        sub_40AD70((_DWORD *)(v5 + *a2));
        v5 += 32;
        --v4;
      }
      while ( v4 );
    }
    v14 = (void *)*a2;
    a2[1] = 0;
    sub_453A20(v14);
    *a2 = 0;
    a2[2] = 0;
  }
  v6 = (_BYTE *)dword_4B6A1C;
  if ( !dword_4B6A1C )
  {
    v7 = sub_4627C2(0x20u);
    v26 = 0;
    if ( v7 )
      v6 = sub_417F30(v7);
    else
      v6 = nullptr;
    dword_4B6A1C = (int)v6;
  }
  v8 = -1;
  v9 = v6[28] == 0;
  v26 = 1;
  if ( !v9 )
  {
    v8 = (*(int (__stdcall **)(int, _DWORD))v6)(2, 0);
    if ( v8 == -1 )
      GetLastError();
  }
  v27[0] = 296;
  if ( v8 != -1 && (*((int (__stdcall **)(int, _DWORD *))v6 + 1))(v8, v27) )
  {
    v10 = v28;
    if ( v28 )
    {
LABEL_19:
      if ( v10 != CurrentProcessId )
      {
        v11 = (*(int (__stdcall **)(int, int))(*(_DWORD *)v24 + 320))(v24, v10);
        if ( v11 <= 4 )
        {
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v21 = nullptr;
          v22 = 0;
          v23 = 0;
          v16 = v28;
          LOBYTE(v26) = 2;
          v20 = v11;
          sub_459B00((int)&v17, MultiByteStr, 0, 0xFDE9u);
          sub_4182E0((DWORD *)&v16);
          sub_419210(v25, &v16);
          LOBYTE(v26) = 3;
          if ( v21 )
          {
            v22 = 0;
            sub_453A20(v21);
            v21 = nullptr;
            v23 = 0;
          }
          LOBYTE(v26) = 4;
          if ( v17 )
          {
            v18 = 0;
            sub_453A20((void *)v17);
          }
          LOBYTE(v26) = 1;
        }
      }
      while ( (*((int (__stdcall **)(int, _DWORD *))v6 + 2))(v8, v27) )
      {
        v10 = v28;
        if ( v28 )
          goto LABEL_19;
      }
    }
    else
    {
      while ( (*((int (__stdcall **)(int, _DWORD *))v6 + 2))(v8, v27) )
      {
        v10 = v28;
        if ( v28 )
          goto LABEL_19;
      }
    }
    v3 = v25;
  }
  GetLastError();
  v12 = v3[1];
  v9 = v6[28] == 0;
  v26 = 5;
  if ( !v9 && v8 != -1 )
    CloseHandle((HANDLE)v8);
  return v12;
}
// 418BC1: conditional instruction was optimized away because esi.4!=FFFFFFFF
// 418C99: conditional instruction was optimized away because esi.4!=FFFFFFFF
// 418CBB: conditional instruction was optimized away because esi.4!=FFFFFFFF
// 4B6A1C: using guessed type int dword_4B6A1C;
