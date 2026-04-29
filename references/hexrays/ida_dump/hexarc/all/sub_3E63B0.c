__int64 __fastcall sub_3E63B0(__int64 a1, __int16 a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r12d
  int v6; // ebp
  int v8; // r13d
  __int64 v9; // rdi
  int dtype_size; // r15d
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int8 *v13; // r8
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rdx
  unsigned __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h]
  unsigned __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  unsigned __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v5 = a3;
  v6 = a4;
  v23 = __readfsqword(0x28u);
  v8 = a5;
  if ( (unsigned __int8)sub_3E4320(a1, a3, a4, a5) )
    return 0;
  v9 = *(unsigned __int8 *)(a1 + 69);
  if ( (_BYTE)v9 == 9 )
    dtype_size = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  else
    dtype_size = get_dtype_size(v9);
  if ( (a2 & 0x400) == 0 || !*(_BYTE *)(a1 + 145) )
  {
    if ( (a2 & 0x100) == 0 )
      v6 = -1;
    if ( (a2 & 0x200) == 0 )
    {
      v12 = -1;
      v8 = -1;
      goto LABEL_11;
    }
    v11 = *(unsigned __int8 *)(a1 + 109);
    if ( (_BYTE)v11 == 9 )
      goto LABEL_10;
LABEL_25:
    v12 = get_dtype_size(v11);
    goto LABEL_11;
  }
  v11 = *(unsigned __int8 *)(a1 + 149);
  if ( (_BYTE)v11 != 9 )
    goto LABEL_25;
LABEL_10:
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
LABEL_11:
  v18 = 0;
  v17 = 0xFFFFFFFF00000000LL;
  if ( (a2 & 4) == 0 )
    v5 = -1;
  if ( v6 != -1 )
  {
    LOBYTE(v17) = 1;
    LODWORD(v18) = v6;
    HIDWORD(v17) = dtype_size;
  }
  v20 = 0;
  v19 = 0xFFFFFFFF00000000LL;
  if ( v8 == -1 )
  {
    v21 = 0xFFFFFFFF00000000LL;
    v22 = 0;
    if ( v5 == -1 )
    {
      v13 = nullptr;
      v14 = nullptr;
    }
    else
    {
      LODWORD(v22) = v5;
      v14 = nullptr;
      LOBYTE(v21) = 1;
      v13 = (unsigned __int8 *)&v21;
      HIDWORD(v21) = dtype_size;
    }
  }
  else
  {
    LOBYTE(v19) = 1;
    LODWORD(v20) = v8;
    HIDWORD(v19) = v12;
    v21 = 0xFFFFFFFF00000000LL;
    v22 = 0;
    if ( v5 == -1 )
    {
      v13 = nullptr;
    }
    else
    {
      LOBYTE(v21) = 1;
      HIDWORD(v21) = dtype_size;
      v13 = (unsigned __int8 *)&v21;
      LODWORD(v22) = v5;
    }
    v14 = (unsigned __int8 *)&v19;
  }
  if ( v6 == -1 )
    v15 = nullptr;
  else
    v15 = (unsigned __int8 *)&v17;
  sub_1CF350(a1, 62, v15, v14, v13);
  sub_3E62E0(a1);
  sub_1166E0((__int64)&v21);
  sub_1166E0((__int64)&v19);
  sub_1166E0((__int64)&v17);
  return 0;
}
