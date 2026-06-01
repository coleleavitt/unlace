unsigned __int64 __fastcall sub_826B50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  _QWORD *v3; // r12
  __int64 dirtree; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rbp
  _BYTE v8[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v9; // [rsp+1008h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v1 = operator new(0x30u);
  *(_DWORD *)(v1 + 8) = 0;
  v2 = v1;
  *(_QWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_QWORD *)v1 = &off_2B12DC8;
  *(_QWORD *)(v1 + 40) = a1 + 184;
  v3 = (_QWORD *)operator new(8u);
  dirtree = create_dirtree(v3, v2);
  v5 = *(_QWORD **)(a1 + 256);
  *v3 = dirtree;
  *(_QWORD *)(a1 + 256) = v3;
  if ( v5 )
  {
    delete_dirtree(*v5);
    operator delete(v5, 8u);
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    v6 = 0;
    do
    {
      qdirname(v8);
      dirtree_mkdir(**(_QWORD **)(a1 + 256), v8);
      if ( (unsigned __int8)dirtree_chdir(**(_QWORD **)(a1 + 256), v8) )
        sub_365330();
      if ( (unsigned __int8)dirtree_link_inode(**(_QWORD **)(a1 + 256), (unsigned int)v6, 1) )
        sub_365330();
      if ( (unsigned __int8)dirtree_chdir(**(_QWORD **)(a1 + 256), "..") )
        sub_365330();
      ++v6;
    }
    while ( v6 < *(_QWORD *)(a1 + 192) );
  }
  return v9 - __readfsqword(0x28u);
}

