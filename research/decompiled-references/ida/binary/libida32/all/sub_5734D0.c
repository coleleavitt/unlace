__int64 __fastcall sub_5734D0(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp

  v4 = operator new(0x48u);
  v5 = *a3;
  *(_BYTE *)(v4 + 40) = 2;
  *(_DWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  copy_idcv(v4 + 40);
  v6 = sub_570000(a1, a2, *(_DWORD *)(v4 + 32));
  if ( v7 )
  {
    v8 = v4;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  else
  {
    v8 = v6;
    if ( v4 )
    {
      free_idcv(v4 + 40);
      operator delete((void *)v4, 0x48u);
    }
  }
  return v8;
}

