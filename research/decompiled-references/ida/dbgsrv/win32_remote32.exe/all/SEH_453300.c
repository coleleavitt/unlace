/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: SEH_453300
// Address: 0x00464DB0

//----- (00464DB0) --------------------------------------------------------
int __cdecl SEH_453300(PEXCEPTION_RECORD ExceptionRecord, char *TargetFrame, int a3)
{
  char *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  uintptr_t v7; // eax
  int (*v8)(void); // ecx
  int v9; // eax
  char v10; // cl
  EXCEPTION_RECORD *v12; // eax
  char *v13; // eax
  uintptr_t v14; // [esp-Ch] [ebp-34h]
  int v15; // [esp-8h] [ebp-30h]
  DWORD ExceptionCode; // [esp-4h] [ebp-2Ch]
  _DWORD v17[2]; // [esp+Ch] [ebp-1Ch] BYREF
  uintptr_t v18; // [esp+14h] [ebp-14h]
  char *v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-Ch]
  uintptr_t v21; // [esp+20h] [ebp-8h]
  char v22; // [esp+27h] [ebp-1h]

  v22 = 0;
  ExceptionCode = ExceptionRecord->ExceptionCode;
  v20 = 1;
  ExceptionRecord->ExceptionCode = sub_482AB2(ExceptionCode);
  v3 = TargetFrame + 16;
  v14 = __security_cookie ^ *((_DWORD *)TargetFrame + 2);
  v19 = TargetFrame + 16;
  v21 = v14;
  sub_464D70(v14);
  sub_46765C(a3);
  v4 = *((_DWORD *)TargetFrame + 3);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( v4 != -2 )
    {
      sub_467810((int)TargetFrame, 0xFFFFFFFE, (int)v3, &__security_cookie);
LABEL_14:
      sub_464D70(v21);
    }
  }
  else
  {
    v17[0] = ExceptionRecord;
    v17[1] = a3;
    *((_DWORD *)TargetFrame - 1) = v17;
    if ( v4 != -2 )
    {
      do
      {
        v5 = v4 + 2 * (v4 + 2);
        v6 = *(_DWORD *)(v21 + 4 * v5);
        v7 = v21 + 4 * v5;
        v8 = *(int (**)(void))(v7 + 4);
        v18 = v7;
        if ( v8 )
        {
          v9 = sub_4677B0(v8);
          v10 = 1;
          v22 = 1;
          if ( v9 < 0 )
          {
            v20 = 0;
            goto LABEL_14;
          }
          if ( v9 > 0 )
          {
            v12 = ExceptionRecord;
            if ( ExceptionRecord->ExceptionCode == -529697949 && sub_463D5D )
            {
              if ( sub_482770((int)&off_4A4514) )
              {
                sub_463D5D(ExceptionRecord);
                v3 = v19;
              }
              v12 = ExceptionRecord;
            }
            sub_4677F0(TargetFrame, v12);
            v13 = TargetFrame;
            if ( *((_DWORD *)TargetFrame + 3) != v4 )
            {
              sub_467810((int)TargetFrame, v4, (int)v3, &__security_cookie);
              v13 = TargetFrame;
            }
            v15 = v21;
            *((_DWORD *)v13 + 3) = v6;
            sub_464D70(v15);
            sub_4677D0(*(int (__fastcall **)(_DWORD, _DWORD))(v18 + 8), (int)v3);
            JUMPOUT(0x464F0D);
          }
        }
        else
        {
          v10 = v22;
        }
        v4 = v6;
      }
      while ( v6 != -2 );
      if ( !v10 )
        return v20;
      goto LABEL_14;
    }
  }
  return v20;
}
// 464F08: control flows out of bounds to 464F0D
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4514: using guessed type int (__cdecl *off_4A4514)(int, int);
