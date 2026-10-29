void __fastcall sub_DF0C60(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // eax
  void *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax

  switch ( a3 )
  {
    case 9:
      v4 = sub_D0E230(a2);
      v10 = ((unsigned __int64)*(unsigned int *)(v4 + 8) + 63) >> 6;
      if ( v10 == 1 )
        return;
      v11 = (_QWORD *)*a1;
      v12 = 8 * v10;
      v13 = *(_QWORD *)(*a1 + 128);
      v11[26] += v12;
      v7 = (char *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v11[17] >= (unsigned __int64)&v7[v12] && v13 )
      {
        v11[16] = &v7[v12];
        goto LABEL_12;
      }
      v6 = sub_986170((__int64)(v11 + 16), v12, v12, 3, v8, v9);
LABEL_7:
      v7 = (char *)v6;
LABEL_12:
      *(_QWORD *)v4 = memcpy(v7, *(const void **)v4, 8 * (((unsigned __int64)*(unsigned int *)(v4 + 8) + 63) >> 6));
      return;
    case 8:
      v4 = sub_D0E1E0(a2);
      v5 = ((unsigned __int64)*(unsigned int *)(v4 + 8) + 63) >> 6;
      if ( v5 == 1 )
        return;
      v6 = sub_9C3B30((__int64 *)(*a1 + 128), 8 * v5, 3u);
      goto LABEL_7;
    case 12:
      v14 = sub_D0E280(a2);
      v15 = sub_21F8CF0(*(unsigned int *)(v14 + 8));
      if ( ((unsigned __int64)(unsigned int)sub_21F9120(v15) + 63) >> 6 != 1 )
      {
        v16 = *a1;
        v17 = sub_21F8CF0(*(unsigned int *)(v14 + 8));
        v18 = sub_21F9120(v17);
        v19 = (void *)sub_9C3B30((__int64 *)(v16 + 128), 8 * (((unsigned __int64)v18 + 63) >> 6), 3u);
        v20 = sub_21F8CF0(*(unsigned int *)(v14 + 8));
        if ( ((unsigned __int64)(unsigned int)sub_21F9120(v20) + 63) >> 6 != 1 )
        {
          if ( *(_QWORD *)v14 )
          {
            v21 = sub_21F8CF0(*(unsigned int *)(v14 + 8));
            v22 = sub_21F9120(v21);
            memcpy(v19, *(const void **)v14, 8 * (((unsigned __int64)v22 + 63) >> 6));
          }
          *(_QWORD *)v14 = v19;
        }
      }
      break;
  }
}
