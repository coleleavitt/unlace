__int64 __fastcall sub_B8C970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rsi
  __int64 v10; // r12
  __int64 *v11; // rbx
  unsigned __int64 v12; // r13
  bool v13; // zf
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 *v22; // rax
  unsigned int v23; // eax

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v8 = a1;
    v9 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v8 = sub_B8C2C0(a1);
    v10 = *(_QWORD *)(v8 + 88);
    v6 = 0;
    v11 = (__int64 *)*v9;
    v12 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    v13 = v12 == *v9;
    if ( v12 <= *v9 )
      goto LABEL_15;
    while ( 1 )
    {
      v14 = v11;
      while ( *(_WORD *)(*v14 + 36) != 126 )
      {
        if ( (__int64 *)v12 == ++v14 )
          return v6;
      }
      if ( (__int64 *)v12 == v14 )
        break;
      while ( 1 )
      {
LABEL_10:
        v15 = *v11;
        if ( *(_WORD *)(*v11 + 36) != 126 )
        {
          v16 = v11 + 1;
          do
          {
            v15 = *v16;
            v11 = v16++;
          }
          while ( *(_WORD *)(v15 + 36) != 126 );
        }
        if ( !sub_B08B30(v15) )
        {
          v21 = *v11;
          if ( *(_WORD *)(*v11 + 36) != 126 )
          {
            v22 = v11 + 1;
            do
            {
              v21 = *v22;
              v11 = v22++;
            }
            while ( *(_WORD *)(v21 + 36) != 126 );
          }
          v23 = sub_B065C0(v21, v10, v17, v18);
          if ( v6 < v23 )
            v6 = v23;
        }
        v13 = v12 == (_QWORD)++v11;
        if ( v12 > (unsigned __int64)v11 )
          break;
LABEL_15:
        if ( v13 )
          return v6;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 126 )
        {
          v19 = (__int64 *)(v12 + 8);
          while ( v11 != v19 )
          {
            v20 = *v19++;
            if ( *(_WORD *)(v20 + 36) == 126 )
              goto LABEL_10;
          }
          return v6;
        }
      }
    }
  }
  return v6;
}
