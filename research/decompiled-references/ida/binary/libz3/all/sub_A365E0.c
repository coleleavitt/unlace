__int64 __fastcall sub_A365E0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  __int64 v15; // rdx
  char v16; // si
  char v17; // r8
  int v18; // eax
  __int64 v19; // rax
  char v20; // dl
  int v21; // edx
  __int64 v22; // rdx
  void *v23; // [rsp+0h] [rbp-88h]
  int v24[2]; // [rsp+10h] [rbp-78h] BYREF
  int v25[2]; // [rsp+18h] [rbp-70h]
  int v26[2]; // [rsp+20h] [rbp-68h]
  int v27[2]; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-58h] BYREF
  char v29; // [rsp+34h] [rbp-54h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+40h] [rbp-48h]
  char v32; // [rsp+44h] [rbp-44h]
  __int64 v33; // [rsp+48h] [rbp-40h]

  v4 = 0;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    if ( *(_DWORD *)(a3 + 48) != 1 )
      return v4;
LABEL_13:
    *(_QWORD *)v24 = 0;
    *(_QWORD *)v25 = 0;
    *(_QWORD *)v26 = 1;
    *(_QWORD *)v27 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v24, (int *)(a3 + 56));
    v9 = a2;
    if ( !*(_BYTE *)(a3 + 89) )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1[74] + 4LL * a2 + 3) & 0x40) != 0 )
    {
      if ( (v26[1] & 1) != 0 || v26[0] != 1 )
      {
        sub_992C20((__int64)&v28, (__int64)v24);
        v11 = v28;
        v28 = v24[0];
        v24[0] = v11;
        v12 = v30;
        v30 = *(_QWORD *)v25;
        *(_QWORD *)v25 = v12;
        v13 = v24[1] & 1 | v29 & 0xFC | v24[1] & 2;
        LOBYTE(v24[1]) = v29 & 1 | v24[1] & 0xFC | v29 & 2;
        v29 = v13;
        v14 = v26[0];
        v26[0] = v31;
        v31 = v14;
        v15 = *(_QWORD *)v27;
        *(_QWORD *)v27 = v33;
        v33 = v15;
        v16 = v32 & 0xFC | v26[1] & 2;
        v17 = v26[1] & 1;
        LOBYTE(v26[1]) = v32 & 1 | v26[1] & 0xFC | v32 & 2;
        v32 = v17 | v16;
        sub_25A130((char *)&v28);
        v9 = a2;
LABEL_19:
        v10 = *(_QWORD *)(a1[78] + 8 * v9);
        if ( !v10 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v24, v10 + 16) )
        {
          sub_A35C20((__int64)a1, a2, v24, 1, *(_QWORD *)(a3 + 104));
          v4 = 1;
        }
        sub_25A130((char *)v24);
        return v4;
      }
      v23 = (void *)a2;
      sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v24, (__int64)&qword_1C7F280, (__int64)v24);
    }
    else
    {
      v23 = (void *)a2;
      sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v24, (__int64)(a1 + 12), (__int64)v24);
    }
    v9 = (unsigned __int64)v23;
    goto LABEL_19;
  }
  *(_QWORD *)v24 = 0;
  *(_QWORD *)v25 = 0;
  *(_QWORD *)v26 = 1;
  *(_QWORD *)v27 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v24, (int *)(a3 + 16));
  if ( *(_BYTE *)(a3 + 88) )
  {
    if ( (*(_BYTE *)(a1[74] + 4LL * a2 + 3) & 0x40) != 0 )
    {
      if ( (v26[1] & 1) != 0 || v26[0] != 1 )
      {
        sub_992CA0((__int64)&v28, (__int64)v24);
        v18 = v24[0];
        v24[0] = v28;
        v28 = v18;
        v19 = *(_QWORD *)v25;
        *(_QWORD *)v25 = v30;
        v30 = v19;
        v20 = v24[1] & 0xFC | v29 & 2 | v29 & 1;
        v29 = v24[1] & 1 | v29 & 0xFC | v24[1] & 2;
        LOBYTE(v24[1]) = v20;
        v21 = v31;
        v31 = v26[0];
        v26[0] = v21;
        v22 = v33;
        v33 = *(_QWORD *)v27;
        *(_QWORD *)v27 = v22;
        LOBYTE(v22) = v26[1] & 0xFC | v32 & 2 | v32 & 1;
        v32 = v26[1] & 1 | v32 & 0xFC | v26[1] & 2;
        LOBYTE(v26[1]) = v22;
        sub_25A130((char *)&v28);
      }
      else
      {
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v24, (__int64)&qword_1C7F280, (__int64)v24);
      }
    }
    else
    {
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v24, (__int64)(a1 + 12), (__int64)v24);
    }
  }
  v7 = *(_QWORD *)(a1[77] + 8LL * a2);
  if ( !v7 || (LOBYTE(v8) = sub_3ED700((__int64)qword_1C7F2C0, v7 + 16, (__int64)v24), v4 = v8, (_BYTE)v8) )
  {
    sub_A35C20((__int64)a1, a2, v24, 0, *(_QWORD *)(a3 + 96));
    v4 = 1;
  }
  sub_25A130((char *)v24);
  if ( *(_DWORD *)(a3 + 48) == 1 )
    goto LABEL_13;
  return v4;
}

