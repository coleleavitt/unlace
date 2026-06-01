void __fastcall sub_B96850(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  _QWORD *v8; // rdx
  int v9; // eax
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v4 = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  if ( v4 == -1 || a2 != *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v4) )
  {
    sub_14CCC20(a1 + 72, *a2);
    v5 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
    if ( v5 == sub_902EE0 )
    {
      v6 = *(_QWORD **)(a1 + 32);
      if ( v6 )
      {
        v7 = *((_DWORD *)v6 - 1);
        if ( v7 == *((_DWORD *)v6 - 2) )
        {
          v10 = (3 * v7 + 1) >> 1;
          v11 = 8 * v10 + 8;
          if ( 8 * v7 + 8 >= (unsigned int)v11 || v7 >= v10 )
            JUMPOUT(0x1518B4);
          v12 = (unsigned int *)sub_186B300(v6 - 1, v11);
          v13 = v12[1];
          v6 = v12 + 2;
          *v12 = v10;
          *(_QWORD *)(a1 + 32) = v12 + 2;
          LODWORD(v12) = v13;
          v8 = &v6[v13];
          v9 = (_DWORD)v12 + 1;
        }
        else
        {
          v8 = &v6[v7];
          v9 = v7 + 1;
        }
      }
      else
      {
        v7 = 0;
        v14 = (_QWORD *)sub_186B270(0x18u);
        v6 = v14 + 1;
        *v14 = 2;
        v9 = 1;
        *(_QWORD *)(a1 + 32) = v6;
        v8 = v6;
      }
      *v8 = a2;
      *((_DWORD *)v6 - 1) = v9;
    }
    else
    {
      v7 = v5(a1, (__int64)a2);
    }
    sub_B66EF0(*(_QWORD **)(a1 + 16), (__int64)a2, (unsigned int *)a1, v7);
  }
}

