__int64 __fastcall sub_1FBB760(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  int *v6; // rbx
  int v7; // rax^4
  __int64 result; // rax
  __int64 v9; // r12
  int v10; // esi

  sub_1FBAE50((__int64 *)a1, (__int64)a2);
  v2 = sub_1F82CF0(*(_QWORD *)a1, a2[5]);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v2);
  v3 = sub_B7B190((__int64)a2);
  v5 = v4;
  v6 = (int *)v3;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4 != 0);
  if ( v5 )
  {
    if ( (_DWORD)v5 )
    {
      v9 = (__int64)&v6[(unsigned int)(v5 - 1) + 1];
      do
      {
        v10 = *v6++;
        sub_1F6F570(*(_QWORD **)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
      }
      while ( (int *)v9 != v6 );
    }
    result = sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  }
  else
  {
    v7 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2) >> 32;
    sub_1F6F570(*(_QWORD **)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
    result = sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
  }
  *(_DWORD *)(a1 + 224) = 127;
  return result;
}
