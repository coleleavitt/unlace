__int64 __fastcall sub_663D20(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // eax
  int v5; // ebx
  int v6; // r12d
  __int64 v7; // rdx
  char *v8; // rax
  __int64 result; // rax
  char v10; // r8
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rdi
  int v14; // [rsp+4h] [rbp-5Ch]
  unsigned __int8 v15; // [rsp+4h] [rbp-5Ch]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 36);
  v18 = __readfsqword(0x28u);
  v17 = 0;
  ptr = nullptr;
  *(_DWORD *)(a1 + 36) = v3 + 1;
  if ( a3[1] )
  {
    v14 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v10 = 0;
      if ( v6 == v5 )
      {
        v11 = v14;
        if ( (unsigned __int64)v14 < a3[4] )
        {
          ++v14;
          v12 = *(_DWORD *)(a3[3] + 4 * v11);
          v6 += v12;
          v10 = v12 > 1;
        }
      }
      *(_QWORD *)&v17 = 0;
      v8 = sub_663280((__int64 *)&ptr, a2, (__int64)a3, (const char **)(*a3 + 56 * v7), v10, 0);
      result = sub_6602F0(a1, (const char *)ptr, v8, 0, 0);
      if ( !(_BYTE)result )
      {
        v13 = ptr;
        goto LABEL_9;
      }
      v7 = ++v5;
    }
    while ( (unsigned __int64)v5 < a3[1] );
    --*(_DWORD *)(a1 + 36);
    v13 = ptr;
LABEL_9:
    if ( v13 )
    {
      v15 = result;
      *(_QWORD *)&v17 = 0;
      qfree(v13);
      return v15;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v3;
    return 1;
  }
  return result;
}
