void __fastcall sub_7D1A0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 i; // r12
  _BYTE *v12; // r13
  int v13; // ebx
  __int64 *v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = v2[1];
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 != v3 )
    {
      if ( *(_BYTE *)(a1 + 24) )
      {
        v12 = (_BYTE *)(a2 + 41);
        v13 = 0;
        get_flags_ex();
        do
        {
          if ( (unsigned __int8)is_off() || *(_BYTE *)(a1 + 25) && (*v12 == 2 || (unsigned __int8)(*v12 - 6) <= 1u) )
          {
            v2 = *(__int64 **)a1;
            v4 = *(_QWORD *)(a1 + 8);
            v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
            goto LABEL_4;
          }
          ++v13;
          v12 += 40;
        }
        while ( v13 != 8 );
        v14 = *(__int64 **)a1;
        v15 = *(_QWORD *)(a1 + 8);
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( v16 < v15 )
        {
          v20 = *v14;
          if ( v14[2] < v15 )
          {
            v21 = qvector_reserve();
            *v14 = v21;
            v20 = v21;
            v16 = v14[1];
          }
          memset((void *)(v20 + v16), 0, v15 - v16);
          v14[1] = v15;
        }
        else if ( v15 != v16 )
        {
          v14[1] = v15;
        }
      }
      else
      {
LABEL_4:
        v6 = *(unsigned __int16 *)(a2 + 26);
        if ( v3 - v4 < v6 )
        {
          v17 = v6 + v4;
          if ( v3 < v6 + v4 )
          {
            v18 = *v2;
            if ( v2[2] < v17 )
            {
              v19 = qvector_reserve();
              v3 = v2[1];
              *v2 = v19;
              v18 = v19;
            }
            memset((void *)(v18 + v3), 0, v17 - v3);
            v2[1] = v17;
          }
          else if ( v17 != v3 )
          {
            v2[1] = v17;
          }
        }
        v7 = *(_QWORD *)(a1 + 16);
        if ( v7 )
        {
          v8 = *(__int64 **)a1;
          v9 = *(_QWORD *)(a1 + 8);
          if ( (*(_QWORD *)(*(_QWORD *)a1 + 8LL) - v9) % v7 )
          {
            if ( under_debugger )
              BUG();
            interr();
            sub_7D3C0(10359);
          }
          else
          {
            v10 = *v8 + v9;
            for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL) + *v8; v10 < i; v10 += *(_QWORD *)(a1 + 16) )
              swap_value();
          }
        }
      }
    }
  }
}
