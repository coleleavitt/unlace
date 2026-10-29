__int64 __fastcall sub_48A940(_QWORD **a1, __int64 a2)
{
  int v2; // edx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 (__fastcall **v8)(_QWORD **, __int64, __int64 *, __int64 *); // r8
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // r13d
  __int64 v12; // [rsp+17h] [rbp-71h] BYREF
  char v13; // [rsp+1Fh] [rbp-69h]
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  v18 = __readfsqword(0x28u);
  if ( v2 < 0 || *(int *)(a2 + 4) < 0 || !*(_QWORD *)(a2 + 16) )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = (unsigned int)v4;
  v6 = HIDWORD(v4);
  if ( v6 == 0xFFFFFFFFLL )
  {
    v14 = -1;
    v15 = v5;
    if ( !v5 )
      goto LABEL_6;
    return 0;
  }
  v14 = v6;
  v15 = v5;
LABEL_6:
  v7 = *a1[3];
  v17 = 0;
  v16 = -1;
  dirtree_resolve_cursor(&v16, v7, &v14);
  v8 = (__int64 (__fastcall **)(_QWORD **, __int64, __int64 *, __int64 *))*a1;
  v12 = v16;
  v13 = v17;
  if ( v16 == -1 || !v17 )
    return v8[2](a1, a2, &v14, &v12);
  result = (*v8)(a1, a2, &v14, &v12);
  if ( !(_DWORD)result )
  {
    v10 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1[2] + 120LL))(a1[2], a2);
    if ( v11 <= 0 )
    {
      return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64 *, __int64 *))(*a1)[1])(a1, a2, &v14, &v12);
    }
    else
    {
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD, _QWORD, __int64))(*a1[2] + 96LL))(&v16, a1[2], v10, 0, a2);
        result = sub_48A940(a1, &v16);
        if ( (_DWORD)result == 2 )
          break;
        if ( v11 == ++v10 )
        {
          if ( (_DWORD)result )
            return result;
          return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64 *, __int64 *))(*a1)[1])(a1, a2, &v14, &v12);
        }
      }
    }
  }
  return result;
}
