__int64 __fastcall sub_18B3150(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // r15
  char v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void (*v20)(); // rdx

  result = (unsigned int)(*a3 - 9);
  if ( (unsigned int)result > 1 )
  {
    result = sub_15F1120(a1);
    if ( result )
    {
      v20 = *(void (**)())(*(_QWORD *)result + 64LL);
      if ( v20 != nullsub_436 )
        result = ((__int64 (__fastcall *)(__int64, __int64))v20)(result, a2);
    }
  }
  if ( a2 )
  {
    v6 = a2;
    v7 = 0;
    while ( 1 )
    {
      sub_A823F0(*(_QWORD *)(a1 + 248), v6, (__int64)a3, 0);
      result = *(_QWORD *)(v6 + 104);
      if ( (result & 1) != 0 )
      {
        if ( v7 )
          return result;
        v10 = result & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_12;
      }
      if ( (result & 2) != 0 )
      {
        if ( v7 )
          return result;
        v14 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
        v7 = 1;
        if ( v14 )
        {
          v15 = v14[2295];
          if ( v15 )
          {
            v16 = v14[294];
            v14[304] += 24LL;
            v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v14[295] >= v17 + 24 && v16 )
            {
              v14[294] = v17 + 24;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v18 = sub_986170((__int64)(v14 + 294), 24, 24, 3, v8, v9);
              v17 = v18 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v18 = v15;
            v19 = v17 | 4;
            *(_DWORD *)(v18 + 8) = 0;
            *(_QWORD *)(v18 + 16) = v6;
          }
          else
          {
            v19 = v6 & 0xFFFFFFFFFFFFFFFBLL;
          }
          v10 = v19 & 0xFFFFFFFFFFFFFFFELL;
          result = v10 | 1;
          *(_QWORD *)(v6 + 104) = v10 | 1;
LABEL_12:
          result &= 0xFFFFFFFFFFFFFFF8LL;
          v7 = 1;
          v11 = result;
          if ( v10 && (v10 & 4) != 0 && result )
          {
            v12 = *(_QWORD *)result;
            v13 = *(_DWORD *)(*(_QWORD *)result + 12LL);
            if ( *(_DWORD *)(v11 + 8) != v13 )
            {
              *(_DWORD *)(v11 + 8) = v13;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 152LL))(v12, v6);
            }
            result = *(_QWORD *)(v11 + 16);
            v7 = 1;
          }
          goto LABEL_7;
        }
      }
      else
      {
        result &= 0xFFFFFFFFFFFFFFFCLL;
        if ( result )
          goto LABEL_7;
      }
      result = 0;
LABEL_7:
      if ( a2 != result )
      {
        v6 = result;
        if ( result )
          continue;
      }
      return result;
    }
  }
  return result;
}
