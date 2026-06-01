__int64 __fastcall sub_587850(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // esi
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v15; // rax

  v3 = a2 & 4;
  if ( (a2 & 4) == 0 )
  {
    a2 &= 2u;
    if ( (_DWORD)a2 )
    {
      v4 = *(_DWORD *)(a1 + 16);
      v5 = *(__int64 **)(a1 + 8);
      if ( v4 > 0 )
      {
        do
        {
          v6 = (_QWORD *)v5[4];
          if ( !v6 || (v7 = v6[1]) == 0 )
          {
            if ( !under_debugger )
              interr(3441);
            BUG();
          }
          ++v3;
          v5 = (__int64 *)(*v6 + 56 * v7 - 56);
        }
        while ( v4 != v3 );
      }
      v8 = (_QWORD *)v5[4];
      if ( v8 )
      {
        v9 = v8[1];
        if ( v9 )
          v5 = (__int64 *)(*v8 + 56 * v9 - 56);
      }
      v10 = v5[1];
      if ( v10 )
      {
        v12 = v10 + 1;
        v13 = v5[1];
        v11 = *v5;
        --v10;
        if ( v5[2] >= v12 )
          goto LABEL_12;
      }
      else
      {
        v11 = *v5;
        v12 = 2;
        v13 = 1;
        if ( (unsigned __int64)v5[2] >= 2 )
        {
LABEL_12:
          v5[1] = v12;
          *(_BYTE *)(v11 + v13) = 0;
          *(_BYTE *)(*v5 + v10) = 63;
          v5[3] = (v5[1] == 0) + v5[1] - 1;
          return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v5);
        }
      }
      v15 = qvector_reserve(v5, v11, v12, 1);
      *v5 = v15;
      v11 = v15;
      goto LABEL_12;
    }
  }
  set_qerrno(1242, a2);
  return 0;
}

