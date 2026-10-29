__int64 __fastcall sub_2030140(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  int *v13; // rax
  int *v14; // rsi
  int *v15; // rdx
  __int64 v16; // rdx
  int *v17; // rax
  int *v18; // rsi
  const char *v19; // rsi
  int v21; // r13d
  int *i; // rbx
  size_t v23; // rax
  void *v24; // rdi
  size_t v25; // r15

  sub_995540(a1, ", <");
  if ( *(_BYTE *)(a2 + 8) == 18 )
    sub_995540(a1, "vscale x ");
  v7 = sub_227B910(a1, a4);
  sub_995540(v7, " x i32> ");
  v8 = 4 * a4;
  v9 = &a3[a4];
  v10 = v8 >> 4;
  v11 = v8 >> 2;
  if ( v10 > 0 )
  {
    v12 = *a3;
    if ( !*a3 )
    {
      if ( a3[1] )
      {
        v13 = a3 + 1;
      }
      else
      {
        v13 = a3 + 2;
        if ( !a3[2] )
        {
          v14 = a3;
          v13 = a3 + 3;
          v15 = &a3[4 * v10];
          if ( !a3[3] )
          {
            while ( 1 )
            {
              v13 = v14 + 4;
              if ( v14 + 4 == v15 )
              {
                v16 = v9 - v15;
                goto LABEL_16;
              }
              if ( v14[4] )
                goto LABEL_41;
              if ( v14[5] )
              {
                v13 = v14 + 5;
                goto LABEL_41;
              }
              if ( v14[6] )
              {
                v13 = v14 + 6;
                goto LABEL_41;
              }
              if ( v14[7] )
                break;
              v14 += 4;
            }
            v13 = v14 + 7;
          }
        }
      }
LABEL_41:
      if ( v9 == v13 )
        goto LABEL_42;
      goto LABEL_75;
    }
    if ( v9 == a3 )
    {
LABEL_42:
      v19 = "zeroinitializer";
      return sub_995540(a1, v19);
    }
    goto LABEL_23;
  }
  v16 = v11;
  v13 = a3;
LABEL_16:
  if ( v16 != 2 )
  {
    if ( v16 != 3 )
    {
      if ( v16 != 1 )
        goto LABEL_42;
      goto LABEL_19;
    }
    if ( *v13 )
      goto LABEL_20;
    ++v13;
  }
  if ( *v13 )
    goto LABEL_20;
  ++v13;
LABEL_19:
  if ( !*v13 )
    goto LABEL_42;
LABEL_20:
  if ( v9 == v13 )
    goto LABEL_42;
  if ( v10 <= 0 )
  {
    v17 = a3;
LABEL_35:
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 != 1 )
        {
LABEL_38:
          v19 = "poison";
          return sub_995540(a1, v19);
        }
LABEL_68:
        if ( *v17 == -1 )
          goto LABEL_38;
        goto LABEL_44;
      }
      if ( *v17 != -1 )
        goto LABEL_44;
      ++v17;
    }
    if ( *v17 != -1 )
      goto LABEL_44;
    ++v17;
    goto LABEL_68;
  }
  v12 = *a3;
LABEL_23:
  if ( v12 != -1 )
  {
LABEL_75:
    v17 = a3;
    goto LABEL_44;
  }
  v17 = a3 + 1;
  if ( a3[1] == -1 )
  {
    v17 = a3 + 2;
    if ( a3[2] == -1 )
    {
      v18 = a3;
      v17 = a3 + 3;
      if ( a3[3] == -1 )
      {
        while ( 1 )
        {
          v17 = v18 + 4;
          if ( !--v10 )
          {
            v11 = v9 - v17;
            goto LABEL_35;
          }
          if ( v18[4] != -1 )
            goto LABEL_44;
          if ( v18[5] != -1 )
          {
            v17 = v18 + 5;
            goto LABEL_44;
          }
          if ( v18[6] != -1 )
          {
            v17 = v18 + 6;
            goto LABEL_44;
          }
          if ( v18[7] != -1 )
            break;
          v18 += 4;
        }
        v17 = v18 + 7;
      }
    }
  }
LABEL_44:
  if ( v9 == v17 )
    goto LABEL_38;
  sub_995540(a1, "<");
  if ( v9 != a3 )
  {
    v21 = *a3;
    for ( i = a3 + 1; ; ++i )
    {
      v23 = j__strlen("i32 ");
      v24 = *(void **)(a1 + 32);
      v25 = v23;
      if ( v23 > *(_QWORD *)(a1 + 24) - (_QWORD)v24 )
      {
        sub_227BF10(a1, "i32 ", v23);
      }
      else if ( v23 )
      {
        memcpy(v24, "i32 ", v23);
        *(_QWORD *)(a1 + 32) += v25;
      }
      if ( v21 == -1 )
      {
        sub_995540(a1, "poison");
        if ( v9 == i )
          break;
      }
      else
      {
        sub_227B930(a1, v21);
        if ( v9 == i )
          break;
      }
      v21 = *i;
      sub_995540(a1, ", ");
    }
  }
  v19 = ">";
  return sub_995540(a1, v19);
}
