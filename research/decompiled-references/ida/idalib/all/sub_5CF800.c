__int64 __fastcall sub_5CF800(__m128i *a1, void *a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  int v10; // eax
  unsigned __int64 v11; // r12
  char v12; // r14
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 *v15; // r15
  unsigned __int64 *v16; // rcx
  int *v18; // rax
  unsigned __int64 *v19; // rax
  int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 *v23; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 *v24; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 *v25; // [rsp+8h] [rbp-1C0h]
  __int64 v26; // [rsp+18h] [rbp-1B0h] BYREF
  int v27[4]; // [rsp+20h] [rbp-1A8h] BYREF
  int v28[2]; // [rsp+30h] [rbp-198h]
  int v29[2]; // [rsp+38h] [rbp-190h]
  int v30[2]; // [rsp+40h] [rbp-188h]
  _BYTE v31[320]; // [rsp+48h] [rbp-180h] BYREF
  int v32[2]; // [rsp+188h] [rbp-40h] BYREF

  *(_QWORD *)v32 = __readfsqword(0x28u);
  v8 = ea2node(a2);
  if ( netnode_supval(v8, 1, &v26, 8, 65) > 0 && v26 || sub_5CC7C0(a1->m128i_i64[0], (__int64)a2) != -1 )
  {
    v9 = sub_5B4200(a1, (__int64)a2);
    v10 = sub_3BE900(a1, (unsigned __int64)a2, 4);
    LODWORD(v11) = v10;
    if ( a2 == (void *)v9 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      if ( (~BYTE1(v10) & 6) == 0 )
        goto LABEL_5;
      *(_QWORD *)v28 = -1;
      v18 = (int *)v31;
      *(_QWORD *)v29 = 0;
      *(_QWORD *)v30 = 0;
      *(_OWORD *)v27 = -1;
      a4 = 0.0;
      do
      {
        *(_WORD *)v18 = 0;
        v18 += 10;
        *((_WORD *)v18 - 19) = 0;
        *((_WORD *)v18 - 18) = 0;
        *(v18 - 2) = 0;
        *((_WORD *)v18 - 17) = 0;
        *((_OWORD *)v18 - 2) = 0;
        *((_QWORD *)v18 - 2) = 0;
      }
      while ( v32 != v18 );
      v12 = 1;
      sub_577F80(a1, a2, (__int128 *)v27);
      v11 = sub_3BE900(a1, (unsigned __int64)a2, 4);
    }
  }
  else
  {
    v12 = 0;
    v11 = sub_3BE900(a1, (unsigned __int64)a2, 4);
  }
  if ( (~(_WORD)v11 & 0x600) != 0 )
    return 0;
LABEL_5:
  v22 = (__int64)&a1[106].m128i_i64[1];
  v13 = sub_505D70((__int64)&a1[106].m128i_i64[1], a3);
  v14 = (__int64)&a1[106].m128i_i64[1];
  v15 = v13;
  if ( !v13 )
  {
    v16 = sub_505D70(v14, (unsigned __int64)a2);
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
  if ( *((char *)v13 + 17) < 0 )
  {
    v15 = sub_505D70(v14, v13[3]);
    v16 = sub_505D70(v22, (unsigned __int64)a2);
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
    v16 = sub_505D70(v14, (unsigned __int64)a2);
    if ( !v16 )
    {
      if ( v12 )
      {
        if ( a3 != -1 )
        {
LABEL_34:
          if ( *((char *)v15 + 16) >= 0 )
          {
            if ( *((int *)v15 + 32) > 1024 && !v12 )
              return 0;
            return sub_5CF110(a1, (__int64)v15, (unsigned __int64)a2, -1, a4, a5, a6);
          }
          if ( v12 )
            return sub_5CF110(a1, (__int64)v15, (unsigned __int64)a2, -1, a4, a5, a6);
          if ( v16 && (v11 & 0x10000) != 0 )
            return 0;
LABEL_38:
          sub_3A61A0(a1, (unsigned __int64)a2, (unsigned __int64)a2 + 1, 0x1Eu);
          return 0;
        }
        v16 = nullptr;
        goto LABEL_27;
      }
LABEL_29:
      *(_QWORD *)v28 = -1;
      v20 = (int *)v31;
      *(_QWORD *)v29 = 0;
      *(_QWORD *)v30 = 0;
      *(_OWORD *)v27 = -1;
      a4 = 0.0;
      do
      {
        *(_WORD *)v20 = 0;
        v20 += 10;
        *((_WORD *)v20 - 19) = 0;
        *((_WORD *)v20 - 18) = 0;
        *(v20 - 2) = 0;
        *((_WORD *)v20 - 17) = 0;
        *((_OWORD *)v20 - 2) = 0;
        *((_QWORD *)v20 - 2) = 0;
      }
      while ( v32 != v20 );
      v25 = v16;
      decode_insn(v27, a2, v32, v16, 0, 0, 0.0);
      v21 = sub_3792E0(0x24u, v27, 1);
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
      v19 = sub_5CC900(a1->m128i_i64, (unsigned __int64)a2);
      v16 = v24;
      v15 = v19;
      goto LABEL_33;
    }
  }
  v23 = v16;
  if ( (int)sub_5C9B30(a1, v15, (unsigned __int64)a2) < 0 )
  {
    v16 = v23;
    if ( v12 )
    {
      if ( a3 != -1 )
        return sub_5CF110(a1, (__int64)v15, (unsigned __int64)a2, -1, a4, a5, a6);
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  return 0;
}
