__int64 __fastcall sub_3705A0(__int64 a1, __int64 a2)
{
  unsigned __int64 edm_by_tid; // rbx
  __int64 tinfo_property; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  int *v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r13
  int v12; // ebx
  int v13; // ecx
  int v14; // ecx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v15[0] = 0;
  *(_DWORD *)(a2 + 8) = -1;
  edm_by_tid = get_edm_by_tid(v15, 0);
  if ( edm_by_tid != -1 )
  {
    if ( get_tinfo_property(v15[0], 291) )
    {
      tinfo_property = get_tinfo_property(v15[0], 310);
      v5 = tinfo_property;
      if ( tinfo_property )
      {
        v6 = *(_QWORD *)(tinfo_property + 32);
        if ( v6 )
        {
          v7 = *(int **)(tinfo_property + 24);
          v8 = &v7[v6];
          if ( v7 != v8 )
          {
            v9 = 0;
            while ( 1 )
            {
              v10 = v9;
              v9 += *v7;
              if ( edm_by_tid < v9 )
                break;
              if ( v8 == ++v7 )
                goto LABEL_3;
            }
            v11 = *(_QWORD *)(*(_QWORD *)v5 + 56 * v10 + 48);
            v12 = v11;
            if ( (*(_BYTE *)(v5 + 52) & 7) != 0 )
              v13 = 1 << ((*(_BYTE *)(v5 + 52) & 7) - 1);
            else
              v13 = (unsigned __int8)getinf(61);
            v14 = 8 * v13;
            if ( v14 <= 63 )
              v12 = v11 & ((1LL << v14) - 1);
            *(_DWORD *)(a2 + 8) = v12;
          }
        }
      }
    }
  }
LABEL_3:
  clear_tinfo_t(v15);
  return 0;
}

