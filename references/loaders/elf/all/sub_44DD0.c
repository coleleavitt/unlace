__int64 __fastcall sub_44DD0(__int64 a1, void **a2, __int64 a3)
{
  unsigned int v5; // esi
  char *v6; // r13
  unsigned __int64 v7; // rdx
  char v8; // r12
  char *v10; // rdi
  char *v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // [rsp+Ch] [rbp-44Ch] BYREF
  char v14[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v5 = *(_DWORD *)(a3 + 8);
  v15 = __readfsqword(0x28u);
  v13 = 0;
  memset(v14, 0, 0x400u);
  if ( !(unsigned __int8)sub_293C0(*(_QWORD *)a3, v5, nullptr, &v13, v14, 0x400u) )
    return 2;
  v6 = (char *)v13;
  v7 = (unsigned __int64)a2[1];
  v8 = v14[0];
  if ( v7 < v13 )
  {
    v11 = (char *)*a2;
    if ( (unsigned __int64)a2[2] < v13 )
    {
      v12 = qvector_reserve(a2, v11, v13, 1);
      *a2 = (void *)v12;
      v7 = (unsigned __int64)a2[1];
      v11 = (char *)v12;
    }
    memset(&v11[v7], 0, (size_t)&v6[-v7]);
    a2[1] = v6;
  }
  else if ( v13 != v7 )
  {
    a2[1] = (void *)v13;
  }
  if ( !(unsigned __int8)sub_293C0(*(_QWORD *)a3, *(_DWORD *)(a3 + 8), *a2, &v13, v14, 0x400u) )
  {
    v10 = (char *)*a2;
    if ( *a2 )
    {
      a2[1] = nullptr;
      qfree(v10);
      *a2 = nullptr;
      a2[2] = nullptr;
    }
    return 2;
  }
  if ( (void *)v13 != a2[1] )
  {
    if ( !under_debugger )
      interr(20139);
    BUG();
  }
  return (v14[0] | (unsigned __int8)v8) != 0 ? 3 : 0;
}
