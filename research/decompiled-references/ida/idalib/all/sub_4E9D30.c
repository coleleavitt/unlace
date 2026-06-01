void __fastcall sub_4E9D30(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v8; // ebp
  int *v9; // r13
  __int64 v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rdi
  void *v16; // rbp
  __int64 (__fastcall **v17)(); // rbp
  void *v18; // rdi
  __int64 v19; // rax

  if ( a1 )
  {
    v8 = a1[1];
    if ( (v8 & 0x8000) != 0 )
    {
      v9 = (int *)sub_4E9A90((__int64)&unk_2CCBEA0, (__int64)(a1 + 16));
      if ( v9 != &dword_2CCBEA8 )
      {
        if ( (debug & 0x20) != 0 )
          sub_3879F0();
        if ( a1 == *((_DWORD **)a1 + 16) )
        {
          v17 = (__int64 (__fastcall **)())&unk_2B2D320;
          do
          {
            if ( *(_BYTE *)v17 == 7 )
            {
              v18 = *(void **)((char *)v17[2] + (_QWORD)a1);
              if ( v18 )
                qfree(v18);
            }
            v17 += 4;
          }
          while ( v17 != &off_2B2D420 );
          v19 = *((_QWORD *)a1 + 11);
          if ( v19 )
            --*(_DWORD *)(v19 + 12);
          *((_QWORD *)a1 + 11) = 0;
        }
        *((_QWORD *)a1 + 16) = 0;
        free_idcv(a1 + 24);
        v10 = *((_QWORD *)a1 + 11);
        if ( v10 )
          --*(_DWORD *)(v10 + 12);
        v11 = *((void **)a1 + 8);
        if ( v11 )
        {
          *((_QWORD *)a1 + 9) = 0;
          qfree(v11);
        }
        operator delete(a1, 0x88u);
        if ( a1 == *((_DWORD **)v9 + 7) )
        {
          v14 = std::_Rb_tree_rebalance_for_erase(v9, &dword_2CCBEA8);
          v15 = *(void **)(v14 + 32);
          v16 = (void *)v14;
          if ( v15 )
          {
            *(_QWORD *)(v14 + 40) = 0;
            qfree(v15);
          }
          operator delete(v16, 0x40u);
          --qword_2CCBEC8;
        }
      }
      v12 = *(_QWORD **)(a2 + 80);
      if ( a1 != (_DWORD *)v12 )
        sub_4E9BA0(v12);
    }
    else
    {
      if ( (~(_WORD)v8 & 0x180) == 0 )
      {
        v13 = *((_QWORD *)a1 + 9);
        if ( v13 )
          callui(182, v13, *((_QWORD *)a1 + 8), (int)&callui, a5, a6);
        operator delete(a1, 0x50u);
      }
      sub_4E76E0(*(_QWORD *)(a2 + 80));
    }
  }
}
