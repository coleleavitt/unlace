unsigned __int64 __fastcall sub_1838A40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v6 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v6 + 16) == 48 && (v7 = sub_F60F10(*v6, a2, a3, a4, a5, a6), (*((_BYTE *)v7 + 75) & 1) != 0) )
  {
    result = sub_B7E900((__int64)v7, a2, v8, v9, v10, v11);
    v14 = result;
    if ( result )
    {
LABEL_8:
      while ( 1 )
      {
        sub_1838A40(v14, a2);
        result = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = result;
        if ( !result )
          break;
        result = (*(_BYTE *)(result + 28) & 0x7Fu) - 49;
        if ( (unsigned int)result > 2 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v14 = v15;
            if ( !v15 )
              return result;
            if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_8;
          }
        }
      }
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    v13 = *(unsigned int *)(a2 + 8);
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v16 = result;
      sub_2237220(a2, a2 + 16, v13 + 1, 8);
      v13 = *(unsigned int *)(a2 + 8);
      result = v16;
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = result;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}
