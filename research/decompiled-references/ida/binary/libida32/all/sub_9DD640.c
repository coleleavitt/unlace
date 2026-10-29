__int64 __fastcall sub_9DD640(__int64 a1, void *a2, unsigned int a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 *v24; // rbp
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // r13
  char *v31; // [rsp+10h] [rbp-78h]
  __int64 v32; // [rsp+18h] [rbp-70h]
  void *v33; // [rsp+20h] [rbp-68h] BYREF
  __int64 v34; // [rsp+28h] [rbp-60h]
  unsigned int v35; // [rsp+30h] [rbp-58h] BYREF
  void *v36; // [rsp+38h] [rbp-50h]
  char v37; // [rsp+40h] [rbp-48h]

  v7 = 8LL * a3;
  v9 = 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL);
  v10 = sub_BD7DA0(*(_QWORD *)(v9 + a1 + v7 + 32));
  if ( (*(_WORD *)v10 & 0x1FF) != 9 )
    goto LABEL_7;
  if ( ((*(_WORD *)(v10 + 2) >> 6) & 7) != 1 )
  {
    sub_C282C0(&v33, v10, a4);
    if ( v37 )
    {
      v12 = (char *)v33;
      v11 = v34;
      if ( v33 != &v35 )
      {
        v32 = v34;
        v31 = (char *)v33;
        operator delete(v33);
        v12 = v31;
        v11 = v32;
      }
      goto LABEL_4;
    }
    v9 = 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL);
LABEL_7:
    v17 = *(unsigned int *)(a1 + 16);
    v18 = v9 + 32;
    v33 = a2;
    v17 *= 8;
    v19 = v18 + v17;
    v20 = v17 - v7;
    v21 = (v17 - v7) >> 5;
    v22 = (__int64 *)(a1 + v19);
    v16 = (__int64 *)(v7 + v18 + a1);
    v23 = v20 >> 3;
    if ( v21 > 0 )
    {
      v24 = &v16[4 * v21];
      do
      {
        v28 = *v16;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42
          && !(unsigned __int8)sub_9DD410(*v16) )
        {
          LOBYTE(v16) = v22 != v16;
          *(_QWORD *)v33 = v28;
          return (unsigned int)v16;
        }
        v25 = v16[1];
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42
          && !(unsigned __int8)sub_9DD410(v16[1]) )
        {
          ++v16;
          *(_QWORD *)v33 = v25;
          LOBYTE(v16) = v22 != v16;
          return (unsigned int)v16;
        }
        v26 = v16[2];
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42
          && !(unsigned __int8)sub_9DD410(v16[2]) )
        {
          v16 += 2;
          *(_QWORD *)v33 = v26;
          LOBYTE(v16) = v22 != v16;
          return (unsigned int)v16;
        }
        v27 = v16[3];
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42
          && !(unsigned __int8)sub_9DD410(v16[3]) )
        {
          v16 += 3;
          *(_QWORD *)v33 = v27;
          LOBYTE(v16) = v22 != v16;
          return (unsigned int)v16;
        }
        v16 += 4;
      }
      while ( v24 != v16 );
      v23 = v22 - v16;
    }
    if ( v23 != 2 )
    {
      if ( v23 != 3 )
      {
        if ( v23 != 1 )
        {
LABEL_29:
          LODWORD(v16) = 0;
          return (unsigned int)v16;
        }
LABEL_34:
        if ( !(unsigned __int8)sub_9DD5E0((__int64 **)&v33, *v16) )
          goto LABEL_29;
LABEL_35:
        LOBYTE(v16) = v22 != v16;
        return (unsigned int)v16;
      }
      if ( (unsigned __int8)sub_9DD5E0((__int64 **)&v33, *v16) )
        goto LABEL_35;
      ++v16;
    }
    if ( (unsigned __int8)sub_9DD5E0((__int64 **)&v33, *v16) )
      goto LABEL_35;
    ++v16;
    goto LABEL_34;
  }
  v11 = *(unsigned int *)(v10 + 16);
  v12 = (char *)(v10 + 4LL * *(unsigned int *)(v10 + 4) + 20);
LABEL_4:
  v13 = *(_QWORD *)(a4 + 2320);
  v14 = *(_QWORD *)(a4 + 17448);
  v34 = a1;
  v33 = &off_2B166A8;
  v35 = a3;
  v36 = a2;
  v15 = sub_EA7760(&v33, v12, &v12[v11], v13, v14, a5);
  v33 = &off_2B166A8;
  LODWORD(v16) = v15;
  nullsub_458(&v33);
  return (unsigned int)v16;
}

