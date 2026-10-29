__int64 __fastcall sub_1047810(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  size_t v3; // rdx
  __int64 v4; // r12
  char *v5; // rbx
  size_t v6; // r14
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rbp
  char *v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 *v21; // r8
  __int64 v22; // r13
  unsigned int v23; // eax
  char *v24; // [rsp+8h] [rbp-D0h]
  unsigned int v25; // [rsp+8h] [rbp-D0h]
  __int64 *v26; // [rsp+10h] [rbp-C8h]
  char *ptr; // [rsp+18h] [rbp-C0h]
  char v28; // [rsp+27h] [rbp-B1h]
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __int64 *v30; // [rsp+48h] [rbp-90h] BYREF
  char *v31; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-80h]
  __int64 v33; // [rsp+60h] [rbp-78h] BYREF

  *(_BYTE *)(a1 + 281) = 1;
  v2 = (void *)sub_228CDC0(*(unsigned int *)(a1 + 512));
  sub_10059A0((__int64)&v31, a1 + 216, v2, v3);
  v4 = *a2;
  v29 = a2[1];
  ptr = v31;
  if ( *a2 != v29 )
  {
    while ( 1 )
    {
      if ( sub_990D60(v4, "+wavefrontsize64") )
      {
        if ( sub_990D60(v4, "+cumode") )
        {
          if ( sub_990D60(v4, "-cumode") )
          {
            if ( !sub_990D60(v4, "+image-insts") )
              *(_BYTE *)(a1 + 525) = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 524) = 0;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 524) = 1;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 520) = 64;
      }
      v5 = *(char **)v4;
      v6 = *(_QWORD *)(v4 + 8);
      v28 = **(_BYTE **)v4;
      if ( v6 )
      {
        --v6;
        ++v5;
      }
      v7 = 16LL * v32;
      v8 = &ptr[v7];
      v9 = v7 >> 4;
      v10 = v7 >> 6;
      if ( v10 )
      {
        v11 = ptr;
        v24 = &ptr[64 * v10];
        while ( v6 != *((_QWORD *)v11 + 1) || v6 && memcmp(*(const void **)v11, v5, v6) )
        {
          v12 = v11 + 16;
          if ( v6 == *((_QWORD *)v11 + 3) && (!v6 || !memcmp(*((const void **)v11 + 2), v5, v6))
            || (v12 = v11 + 32, v6 == *((_QWORD *)v11 + 5)) && (!v6 || !memcmp(*((const void **)v11 + 4), v5, v6))
            || (v12 = v11 + 48, v6 == *((_QWORD *)v11 + 7)) && (!v6 || !memcmp(*((const void **)v11 + 6), v5, v6)) )
          {
            v11 = v12;
            goto LABEL_21;
          }
          v11 += 64;
          if ( v24 == v11 )
          {
            v9 = (v8 - v11) >> 4;
            goto LABEL_38;
          }
        }
        goto LABEL_21;
      }
      v11 = ptr;
LABEL_38:
      if ( v9 == 2 )
        goto LABEL_51;
      if ( v9 == 3 )
        break;
      if ( v9 != 1 || v6 != *((_QWORD *)v11 + 1) )
        goto LABEL_26;
LABEL_42:
      if ( v6 && memcmp(*(const void **)v11, v5, v6) )
        goto LABEL_26;
LABEL_21:
      if ( v8 != v11 )
      {
        v13 = sub_2220DF0(v5, v6);
        v14 = (unsigned int)sub_2220F70(a1 + 528, v5, v6, v13);
        v16 = (__int64 *)(*(_QWORD *)(a1 + 528) + 8 * v14);
        if ( *v16 )
        {
          if ( *v16 != -8 )
          {
            sub_1005BB0(&v30, v16, 0);
            v17 = v30;
LABEL_25:
            *(_BYTE *)(*v17 + 8) = v28 == 43;
            ptr = v31;
            goto LABEL_26;
          }
          --*(_DWORD *)(a1 + 544);
        }
        v26 = v16;
        v25 = v14;
        v19 = sub_220C370(v6 + 17, 8, v14, v14, v16, v15);
        v20 = v25;
        v21 = v26;
        v22 = v19;
        if ( v6 )
        {
          memcpy((void *)(v19 + 16), v5, v6);
          v21 = v26;
          v20 = v25;
        }
        *(_BYTE *)(v22 + v6 + 16) = 0;
        *(_QWORD *)v22 = v6;
        *(_BYTE *)(v22 + 8) = 0;
        *v21 = v22;
        ++*(_DWORD *)(a1 + 540);
        v23 = sub_2221390(a1 + 528, v20);
        sub_1005BB0(&v30, (__int64 *)(*(_QWORD *)(a1 + 528) + 8LL * v23), 0);
        v17 = v30;
        goto LABEL_25;
      }
LABEL_26:
      v4 += 32;
      if ( v29 == v4 )
        goto LABEL_27;
    }
    if ( v6 == *((_QWORD *)v11 + 1) && (!v6 || !memcmp(*(const void **)v11, v5, v6)) )
      goto LABEL_21;
    v11 += 16;
LABEL_51:
    if ( v6 == *((_QWORD *)v11 + 1) && (!v6 || !memcmp(*(const void **)v11, v5, v6)) )
      goto LABEL_21;
    v11 += 16;
    if ( v6 != *((_QWORD *)v11 + 1) )
      goto LABEL_26;
    goto LABEL_42;
  }
LABEL_27:
  if ( ptr != (char *)&v33 )
    free(ptr);
  return 1;
}

