__int64 __fastcall sub_5B47C0(__m128i *a1, unsigned int a2, unsigned int a3, double a4, double a5, double a6)
{
  unsigned int v8; // eax
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // r12
  char v12; // r14
  unsigned int *v13; // rax
  __int64 v14; // rdi
  unsigned int *v15; // r15
  unsigned int *v16; // rcx
  int *v18; // rax
  unsigned int *v19; // rax
  int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-138h]
  unsigned int *v23; // [rsp+0h] [rbp-138h]
  unsigned int *v24; // [rsp+0h] [rbp-138h]
  unsigned int *v25; // [rsp+8h] [rbp-130h]
  int v26; // [rsp+1Ch] [rbp-11Ch] BYREF
  int v27[2]; // [rsp+20h] [rbp-118h] BYREF
  int v28[2]; // [rsp+28h] [rbp-110h]
  int v29[2]; // [rsp+30h] [rbp-108h]
  _BYTE v30[192]; // [rsp+38h] [rbp-100h] BYREF
  int v31[2]; // [rsp+F8h] [rbp-40h] BYREF

  *(_QWORD *)v31 = __readfsqword(0x28u);
  v8 = ea2node(a2);
  if ( netnode_supval(v8, 1, &v26, 4, 65) > 0 && v26 || (unsigned int)sub_5B1940(a1->m128i_i64[0], a2) != -1 )
  {
    v9 = sub_59A020(a1, a2);
    v10 = sub_3B9AA0((__int64)a1, a2, 4);
    LODWORD(v11) = v10;
    if ( a2 == v9 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      if ( (~BYTE1(v10) & 6) == 0 )
        goto LABEL_5;
      *(_QWORD *)v27 = -1;
      *(_QWORD *)v29 = 0;
      *(_QWORD *)v28 = 0xFFFFFFFFLL;
      v18 = (int *)v30;
      do
      {
        *(_WORD *)v18 = 0;
        v18 += 6;
        *((_WORD *)v18 - 11) = 0;
        *((_WORD *)v18 - 10) = 0;
        *(v18 - 1) = 0;
        *((_WORD *)v18 - 9) = 0;
        *((_QWORD *)v18 - 2) = 0;
        *(v18 - 2) = 0;
      }
      while ( v31 != v18 );
      v12 = 1;
      sub_55E700(a1, a2, v27);
      v11 = sub_3B9AA0((__int64)a1, a2, 4);
    }
  }
  else
  {
    v12 = 0;
    v11 = sub_3B9AA0((__int64)a1, a2, 4);
  }
  if ( (~(_WORD)v11 & 0x600) != 0 )
    return 0;
LABEL_5:
  v22 = (__int64)&a1[101].m128i_i64[1];
  v13 = sub_4EE820((__int64)&a1[101].m128i_i64[1], a3);
  v14 = (__int64)&a1[101].m128i_i64[1];
  v15 = v13;
  if ( !v13 )
  {
    v16 = sub_4EE820(v14, a2);
    if ( v16 )
      return 0;
    if ( v12 )
    {
      if ( a3 != -1 )
        return 0;
      v16 = nullptr;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( *((char *)v13 + 9) < 0 )
  {
    v15 = sub_4EE820(v14, v13[4]);
    v16 = sub_4EE820(v22, a2);
    if ( !v16 )
    {
      if ( v12 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( !v15 )
      return 0;
  }
  else
  {
    v16 = sub_4EE820(v14, a2);
    if ( !v16 )
    {
      if ( v12 )
      {
        if ( a3 != -1 )
        {
LABEL_34:
          if ( *((char *)v15 + 8) >= 0 )
          {
            if ( (int)v15[26] > 1024 && !v12 )
              return 0;
            return sub_5B40F0(a1->m128i_i64, (__int64)v15, a2, 0xFFFFFFFF, a4, a5, a6);
          }
          if ( v12 )
            return sub_5B40F0(a1->m128i_i64, (__int64)v15, a2, 0xFFFFFFFF, a4, a5, a6);
          if ( v16 && (v11 & 0x10000) != 0 )
            return 0;
LABEL_38:
          sub_3A1A90(a1, a2, a2 + 1, 0x1Eu);
          return 0;
        }
        v16 = nullptr;
        goto LABEL_27;
      }
LABEL_29:
      *(_QWORD *)v27 = -1;
      *(_QWORD *)v29 = 0;
      *(_QWORD *)v28 = 0xFFFFFFFFLL;
      v20 = (int *)v30;
      do
      {
        *(_WORD *)v20 = 0;
        v20 += 6;
        *((_WORD *)v20 - 11) = 0;
        *((_WORD *)v20 - 10) = 0;
        *(v20 - 1) = 0;
        *((_WORD *)v20 - 9) = 0;
        *((_QWORD *)v20 - 2) = 0;
        *(v20 - 2) = 0;
      }
      while ( v31 != v20 );
      v25 = v16;
      decode_insn(v27, a2, v31, v16, 0, 0);
      v21 = sub_375980(0x24u, v27, 1);
      v16 = v25;
      if ( v21 == 100 )
        goto LABEL_38;
LABEL_32:
      if ( a3 != -1 )
      {
LABEL_33:
        if ( !v15 )
          return 0;
        goto LABEL_34;
      }
LABEL_27:
      v24 = v16;
      v19 = sub_5B1A80(a1->m128i_i64, a2);
      v16 = v24;
      v15 = v19;
      goto LABEL_33;
    }
  }
  v23 = v16;
  if ( (int)sub_5AEEA0(a1, (__int64)v15, a2) < 0 )
  {
    v16 = v23;
    if ( v12 )
    {
      if ( a3 != -1 )
        return sub_5B40F0(a1->m128i_i64, (__int64)v15, a2, 0xFFFFFFFF, a4, a5, a6);
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  return 0;
}

