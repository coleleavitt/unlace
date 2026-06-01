void __fastcall sub_1664D50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r12
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *i; // rax
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v5 = *(__int64 **)(a2 + 120);
  v10 = &v5[(unsigned int)sub_B76070(a2, a2, a3, a4)];
  if ( v5 != v10 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(*v5 + 29) & 1) == 0 )
        goto LABEL_3;
      v11 = sub_B8C3D0(*v5, a2, v6, v7, v8, v9);
      v6 = *v11;
      v7 = *v11 + 8LL * *((unsigned int *)v11 + 2);
      if ( *v11 >= v7 )
      {
        if ( v6 == v7 )
          goto LABEL_3;
        if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 68 )
          return;
        for ( i = (__int64 *)(v7 + 8); ; ++i )
        {
          v7 = (unsigned __int64)i;
          if ( i == (__int64 *)v6 )
            break;
          v14 = *i;
          if ( *(_WORD *)(v14 + 36) == 68 )
            return;
        }
        if ( v10 == ++v5 )
          break;
      }
      else
      {
        v12 = (__int64 *)*v11;
        while ( 1 )
        {
          v6 = *v12;
          if ( *(_WORD *)(*v12 + 36) == 68 )
            break;
          if ( (__int64 *)v7 == ++v12 )
            goto LABEL_3;
        }
        if ( (__int64 *)v7 != v12 )
          return;
LABEL_3:
        if ( v10 == ++v5 )
          break;
      }
    }
  }
  v15 = *(__int64 **)(a2 + 120);
  v19 = &v15[(unsigned int)sub_B76070(a2, a2, v6, v7)];
  while ( v19 != v15 )
  {
    while ( 1 )
    {
      v20 = *v15;
      v21 = *(_QWORD *)(*(_QWORD *)(*v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
      {
        v22 = *(_QWORD *)(*v15 + 48);
        v23 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43;
        if ( (unsigned int)v23 <= 1
          || (v21 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v15 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v23, v16)) != 0 )
        {
          while ( 1 )
          {
            v24 = *(_QWORD *)(v21 + 32);
            if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v25 = v24 & 0xFFFFFFFFFFFFFFF0LL;
              v21 = *(_QWORD *)v25;
              v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v25 + 16LL) - 43;
              if ( (unsigned int)v23 <= 1 )
                break;
              v26 = sub_F63050(v21, a2, v23, v16);
              v24 = *(_QWORD *)(v26 + 32);
              if ( (*(_BYTE *)(v26 + 18) & 0x10) == 0 )
                goto LABEL_23;
            }
          }
LABEL_23:
          v22 = v24;
        }
        if ( (unsigned __int8)sub_1599040(v22, a2, v23, v16, v17, v18) )
          break;
      }
      if ( v19 == ++v15 )
        return;
    }
    v27 = *a1;
    v32[0] = 0;
    ++v15;
    a2 = sub_B37CF0(*(_QWORD *)(v27 + 248), v32, 1u, 0, 0);
    sub_B8CC60(v20, a2, v28, v29, v30, v31);
  }
}
