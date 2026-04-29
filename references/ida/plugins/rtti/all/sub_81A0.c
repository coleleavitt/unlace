__int64 __fastcall sub_81A0(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // r15d
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  const char *v26; // rcx
  char *v27; // rsi
  const char *v28; // rsi
  char *v29; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+8h] [rbp-D0h]
  const char *v31; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-B0h]
  _BYTE v33[24]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v34; // [rsp+58h] [rbp-80h]
  __int64 v35; // [rsp+68h] [rbp-70h]
  __int128 v36; // [rsp+70h] [rbp-68h]
  __int64 v37; // [rsp+80h] [rbp-58h]
  __int128 v38; // [rsp+88h] [rbp-50h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v7 = getseg();
  if ( !v7 )
    goto LABEL_19;
  if ( *(_QWORD *)(v7 + 8) - a3 <= 0x17 )
    goto LABEL_19;
  if ( (unsigned __int8)get_fixups() )
    goto LABEL_19;
  if ( !(unsigned __int8)sub_4AA0(a1, a3, a3 + 24, 0) )
    goto LABEL_19;
  if ( !(unsigned __int8)sub_4D20(a1, 0x14u, (unsigned int *)a1 + 32) )
    goto LABEL_19;
  v8 = *((_DWORD *)a1 + 32);
  if ( v8 > 0x7F )
    goto LABEL_19;
  if ( (v8 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)sub_4AA0(a1, a3, a3 + 28, 0)
      || !(unsigned __int8)sub_4D90(a1, 0x18u, a1 + 17, 1, 0)
      || !(unsigned __int8)is_mapped() )
    {
      goto LABEL_19;
    }
  }
  else
  {
    a1[17] = -1;
  }
  if ( !(unsigned __int8)sub_4D90(a1, 0, a1 + 6, 1, 0)
    || !a1[6]
    || !(unsigned __int8)is_mapped()
    || !(unsigned __int8)sub_4D20(a1, 4u, (unsigned int *)a1 + 14)
    || (v9 = sub_50F0((__int64)(a1 + 8), a2, a3 + 8), !(_BYTE)v9) )
  {
LABEL_19:
    a1[3] = 0;
    v9 = 0;
    *(_OWORD *)a1 = -1;
    return v9;
  }
  v10 = sub_4F60(a1, 1, a2);
  if ( v10 )
  {
    LOBYTE(v9) = v10 == 1;
    return v9;
  }
  if ( !sub_4ED0(a2, 0, a1[6]) )
  {
    v35 = a1[5];
    memset(v33, 0, sizeof(v33));
    v34 = 0;
    v36 = -1;
    v38 = 0;
    v37 = qvector_reserve();
    *(_QWORD *)&v38 = 1;
    *(_BYTE *)v37 = 0;
    if ( !(unsigned __int8)sub_7690(v33, a2, a1[6], a4) )
    {
      sub_51B0(v33);
      goto LABEL_19;
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v33[16] )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
  }
  v12 = a1[17];
  if ( v12 != -1 && !sub_4ED0(a2, 2u, v12) )
  {
    v24 = a1[6];
    v25 = a1[17];
    v35 = a1[5];
    DWORD2(v36) = 0;
    *(_QWORD *)&v36 = 0xFFFFFFFFLL;
    v37 = -1;
    memset(v33, 0, sizeof(v33));
    v34 = 0;
    if ( (unsigned __int8)sub_6800(v33, a2, v25, a4, v24) )
    {
      if ( *(_QWORD *)&v33[16] )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
      goto LABEL_24;
    }
    if ( *(_QWORD *)&v33[16] )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    goto LABEL_19;
  }
LABEL_24:
  if ( (a4 & 0x10) != 0 )
  {
    v13 = a1[5];
    v14 = 4;
    if ( *(_QWORD *)(v13 + 368) == 8 )
      v14 = 3;
    v15 = *a1;
    v16 = sub_10380(v13, *a1, v14, "reference to type description", 0) + v15;
    v17 = sub_10380(a1[5], v16, 1, "# of sub elements within base class array", 0) + v16;
    v18 = sub_10380(a1[5], v17, 0, "member displacement", 0) + v17;
    v19 = sub_10380(a1[5], v18, 0, "vftable displacement", 0) + v18;
    v20 = sub_10380(a1[5], v19, 0, "displacement within vftable", 0) + v19;
    v21 = sub_10380(a1[5], v20, 2, "base class attributes", 0);
    if ( (a1[16] & 0x40) != 0 )
      sub_10380(a1[5], v20 + v21, v14, "reference to class hierarchy descriptor", 0);
  }
  if ( (a4 & 0x20) != 0 )
  {
    v22 = a1[6];
    v23 = a1[5];
    v30 = 0;
    v29 = 0;
    if ( (unsigned __int8)sub_7980(v23, a2, (__int64)&v29, v22, a4) )
    {
      sub_5240((__int64)&v31, "??_R1");
      sub_4320((__int64 *)&v31, *((int *)a1 + 28), 1);
      sub_4320((__int64 *)&v31, *((int *)a1 + 29), 1);
      sub_4320((__int64 *)&v31, *((int *)a1 + 30), 1);
      sub_4320((__int64 *)&v31, *((unsigned int *)a1 + 32), 0);
      memset(v33, 0, sizeof(v33));
      v26 = &haystack;
      if ( v32 )
        v26 = v31;
      v27 = (char *)&haystack;
      if ( (_QWORD)v30 )
        v27 = v29;
      if ( (unsigned __int8)sub_4600((__int64)v33, v27, 1, v26, "8") )
      {
        v28 = &haystack;
        if ( *(_QWORD *)&v33[8] )
          v28 = *(const char **)v33;
        sub_10260(*a1, v28);
      }
      if ( *(_QWORD *)v33 )
      {
        *(_QWORD *)&v33[8] = 0;
        qfree();
      }
      if ( v31 )
      {
        v32 = 0;
        qfree();
      }
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
  }
  return v9;
}
