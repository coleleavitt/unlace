__int64 __fastcall sub_170990(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  LODWORD(v5[0]) = -1;
  WORD2(v5[0]) = 0;
  if ( a2 >= 0 )
  {
    v2 = *(_QWORD **)(a1 + 192);
    if ( (unsigned __int64)a2 < v2[1] && *(_DWORD *)(a1 + 200) == -1 )
      v5[0] = *(_QWORD *)(*v2 + 8 * a2);
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  sub_1705C0((char **)(a1 + 248), *(_DWORD *)(a1 + 208), *(_DWORD *)(a1 + 212), nullptr, 0, 1);
  if ( *(_DWORD *)(a1 + 200) != -1 )
  {
    v3 = *(_QWORD *)(a1 + 200);
    *(_DWORD *)(a1 + 200) = -1;
    v5[0] = v3;
  }
  return sub_1708C0(a1, (unsigned int *)v5);
}

