/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466EB4
// Address: 0x00466EB4

//----- (00466EB4) --------------------------------------------------------
void __usercall sub_466EB4(
        int *a1@<edi>,
        int a2@<esi>,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        struct EHRegistrationNode *TargetFrame)
{
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15[5]; // [esp+4h] [ebp-38h] BYREF
  int v16; // [esp+18h] [ebp-24h] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-20h]
  unsigned int v18; // [esp+24h] [ebp-18h]
  _DWORD v19[2]; // [esp+28h] [ebp-14h] BYREF
  int v20; // [esp+30h] [ebp-Ch]
  int v21; // [esp+34h] [ebp-8h]
  unsigned int v22; // [esp+38h] [ebp-4h]

  if ( ExceptionRecord->ExceptionCode != -2147483645 )
  {
    if ( !*((_DWORD *)sub_4667C5((int)ExceptionRecord, a1, a2) + 2)
      || (a2 = off_4B4048(0), *((_DWORD *)sub_4667C5((int)ExceptionRecord, nullptr, a2) + 2) == a2)
      || ExceptionRecord->ExceptionCode == -532459699
      || ExceptionRecord->ExceptionCode == -532462766
      || !sub_463FF1(
            (int)ExceptionRecord,
            nullptr,
            a2,
            (int *)ExceptionRecord,
            a4,
            a5,
            a6,
            (int)a7,
            a9,
            (int)TargetFrame) )
    {
      v19[0] = a7;
      v19[1] = 0;
      if ( !a7[3] )
        sub_467F38((int)ExceptionRecord, nullptr, a2);
      sub_463F22(&v16, (int)v19, a8, a6, a7, a9);
      v10 = v17;
      v11 = v16;
      v20 = v16;
      v22 = v17;
      if ( v17 < v18 )
      {
        v12 = 20 * v17;
        v21 = 20 * v17;
        do
        {
          qmemcpy(v15, (const void *)(v12 + *(_DWORD *)(*(_DWORD *)v11 + 16)), sizeof(v15));
          if ( v15[0] <= a8 && a8 <= v15[1] )
          {
            v13 = 16 * v15[3] + v15[4] - 16;
            v14 = *(_DWORD *)(v13 + 4);
            if ( (!v14 || !*(_BYTE *)(v14 + 8)) && (*(_BYTE *)v13 & 0x40) == 0 )
            {
              sub_466A90(
                ExceptionRecord,
                a4,
                a5,
                a6,
                (int)a7,
                (int *)(16 * v15[3] + v15[4] - 16),
                0,
                v15,
                a9,
                TargetFrame);
              v10 = v22;
            }
          }
          ++v10;
          v11 = v20;
          v12 = v21 + 20;
          v22 = v10;
          v21 += 20;
        }
        while ( v10 < v18 );
      }
    }
  }
}
// 466EB4: could not find valid save-restore pair for edi
// 4B4048: using guessed type int (__stdcall *off_4B4048)(int a1);
