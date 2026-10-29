__int64 __fastcall sub_1A09D80(__int64 *a1, unsigned int a2, __int64 a3, double a4)
{
  unsigned int v4; // ebp
  void **v5; // rsi
  __int64 i; // rdx
  __int64 v7; // rax
  unsigned int *v8; // rcx
  unsigned int v9; // r12d
  unsigned __int8 *v10; // r14
  unsigned int v11; // ebx
  unsigned __int8 v12; // cl
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  unsigned __int8 v16; // r13
  unsigned int v17; // edx
  __int64 v18; // rdi
  void **v20; // rbx
  void **v21; // rcx
  unsigned int v22; // ebp
  char v23; // r11
  char v24; // r10
  char v25; // r9
  char v26; // r8
  char v27; // r15
  char v28; // r14
  char v29; // r13
  char v30; // r12
  char *v31; // rax
  int v32; // r15d
  unsigned int v33; // ecx
  char v34; // r14
  char *v35; // rax
  char v36; // r13
  char v37; // r11
  char v38; // r10
  char v39; // r9
  char v40; // r8
  char v41; // di
  char v42; // si
  char v45; // [rsp+18h] [rbp-40h]
  char v46; // [rsp+19h] [rbp-3Fh]
  char v47; // [rsp+1Ah] [rbp-3Eh]
  char v48; // [rsp+1Bh] [rbp-3Dh]

  v4 = a2;
  if ( !(_BYTE)byte_2CD8C28 && __cxa_guard_acquire(&byte_2CD8C28) )
  {
    sub_1A09A70((__int64)(&off_2C8EEA0 - 264), (unsigned __int64)&off_2C8EEA0, 14);
    v20 = (void **)((char *)&off_2C8EEA0 - 2100);
    v21 = &off_2C8EEA0 - 264;
    do
    {
      v22 = *(_DWORD *)v20;
      v23 = *((_BYTE *)v20 + 4);
      v24 = *((_BYTE *)v20 + 5);
      v25 = *((_BYTE *)v20 + 6);
      v26 = *((_BYTE *)v20 + 7);
      v27 = *((_BYTE *)v20 + 8);
      v28 = *((_BYTE *)v20 + 9);
      v29 = *((_BYTE *)v20 + 10);
      v30 = *((_BYTE *)v20 + 11);
      if ( *(_DWORD *)v20 < *(_DWORD *)v21 )
      {
        v48 = *((_BYTE *)v20 + 7);
        v47 = *((_BYTE *)v20 + 6);
        v46 = *((_BYTE *)v20 + 5);
        v45 = *((_BYTE *)v20 + 4);
        memmove((char *)v21 + 12, &dword_2C8E660, (char *)v20 - (char *)v21);
        v21 = (void **)&dword_2C8E660;
        dword_2C8E660 = v22;
        byte_2C8E664 = v45;
        byte_2C8E665 = v46;
        byte_2C8E666 = v47;
        byte_2C8E667 = v48;
        byte_2C8E668 = v27;
        byte_2C8E669 = v28;
        byte_2C8E66A = v29;
        byte_2C8E66B = v30;
      }
      else
      {
        v31 = (char *)v20 - 12;
        if ( v22 < *((_DWORD *)v20 - 3) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v31 + 12) = *(_QWORD *)v31;
            *((_DWORD *)v31 + 5) = *((_DWORD *)v31 + 2);
            if ( v22 >= *((_DWORD *)v31 - 3) )
              break;
            v31 -= 12;
          }
        }
        else
        {
          v31 = (char *)v20;
        }
        *(_DWORD *)v31 = v22;
        v31[4] = v23;
        v31[5] = v24;
        v31[6] = v25;
        v31[7] = v26;
        v31[8] = v27;
        v31[9] = v28;
        v31[10] = v29;
        v31[11] = v30;
      }
      v20 = (void **)((char *)v20 + 12);
    }
    while ( v20 != (void **)&unk_2C8E720 );
    v4 = a2;
    do
    {
      v33 = *(_DWORD *)v20;
      v34 = *((_BYTE *)v20 + 4);
      v35 = (char *)v20 - 12;
      v36 = *((_BYTE *)v20 + 5);
      v37 = *((_BYTE *)v20 + 6);
      v38 = *((_BYTE *)v20 + 7);
      v39 = *((_BYTE *)v20 + 8);
      v40 = *((_BYTE *)v20 + 9);
      v41 = *((_BYTE *)v20 + 10);
      v42 = *((_BYTE *)v20 + 11);
      if ( *((_DWORD *)v20 - 3) > *(_DWORD *)v20 )
      {
        while ( 1 )
        {
          *(_QWORD *)(v35 + 12) = *(_QWORD *)v35;
          *((_DWORD *)v35 + 5) = *((_DWORD *)v35 + 2);
          if ( v33 >= *((_DWORD *)v35 - 3) )
            break;
          v35 -= 12;
        }
      }
      else
      {
        v35 = (char *)v20;
      }
      v20 = (void **)((char *)v20 + 12);
      *(_DWORD *)v35 = v33;
      v35[4] = v34;
      v35[5] = v36;
      v35[6] = v37;
      v35[7] = v38;
      v35[8] = v39;
      v35[9] = v40;
      v35[10] = v41;
      v35[11] = v42;
    }
    while ( v20 != &off_2C8EEA0 );
    __cxa_guard_release(&byte_2CD8C28);
  }
  v5 = (void **)&dword_2C8E660;
  for ( i = 176; ; i = v7 )
  {
    v7 = i >> 1;
    v8 = (unsigned int *)v5 + 3 * (i >> 1);
    if ( v4 <= *v8 )
      break;
    v5 = (void **)(v8 + 3);
    v7 = i - v7 - 1;
    if ( v7 <= 0 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  if ( v7 )
    goto LABEL_4;
LABEL_7:
  v9 = 0;
  if ( v5 != &off_2C8EEA0 && *(_DWORD *)v5 == v4 )
  {
    v10 = (unsigned __int8 *)v5 + 4;
    v11 = 0;
    do
    {
      v12 = v10[2];
      if ( v12 )
      {
        if ( v10[1] )
        {
          v13 = 1 << (v12 - 1);
          v14 = v13 - 1;
          v15 = -v13;
        }
        else
        {
          v15 = 0;
          v14 = (1 << v12) - 1;
        }
        v16 = v10[3];
        v17 = *v10;
        v18 = *a1;
        if ( v16 )
        {
          v32 = sub_16D5460(v18, a3, v17, v15 << v16, v14 << v16, 1u, a4);
          v11 |= sub_16D5310(*a1, a3, *v10, 1 << v16, a4) | v32;
        }
        else
        {
          v11 |= sub_16D5460(v18, a3, v17, v15, v14, 1u, a4);
        }
      }
      v10 += 4;
    }
    while ( (unsigned __int8 *)((char *)v5 + 12) != v10 );
    return v11;
  }
  return v9;
}
