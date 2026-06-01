__int64 __fastcall sub_2BD6A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r15d
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // esi
  int v15; // r8d
  unsigned int v16; // ecx
  int v17; // ecx

  v2 = 0;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 192);
    v5 = *(_QWORD *)(a1 + 200);
    v6 = v4;
    if ( 20 * v5 )
    {
      do
      {
        if ( *(_BYTE *)v6 )
        {
          v10 = *(_DWORD *)(v6 + 4);
          v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
          if ( v11 == interactive_graph_t__::vfunc_7 )
          {
            v12 = *(_DWORD *)(a2 + 184);
          }
          else
          {
            v12 = v11(a2);
            v4 = *(_QWORD *)(a1 + 192);
            v5 = *(_QWORD *)(a1 + 200);
          }
          if ( v10 < v12 )
          {
            v13 = *(int *)(v6 + 4);
            v14 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v13);
            v15 = v14 & 0x7FFFFFFF;
            if ( (*(_BYTE *)(*(_QWORD *)(a2 + 104) + v13) & 1) != 0 )
            {
              v16 = v2;
              v2 |= 5u;
              v17 = v16 | 1;
              if ( v14 >= 0 )
                v2 = v17;
              if ( *(_DWORD *)(v6 + 4) == v15 )
                goto LABEL_8;
            }
            else
            {
              if ( (_DWORD)v13 == v15 )
              {
                if ( v14 < 0 )
                  v2 |= 4u;
                goto LABEL_8;
              }
              v8 = v2;
              v2 |= 1u;
              v9 = v8 | 5;
              if ( v14 < 0 )
                v2 = v9;
            }
            v2 |= 2u;
          }
        }
LABEL_8:
        v6 += 20;
      }
      while ( v6 != v4 + 20 * v5 );
    }
  }
  return v2;
}
