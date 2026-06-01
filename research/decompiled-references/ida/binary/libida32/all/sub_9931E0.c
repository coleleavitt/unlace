unsigned __int64 __fastcall sub_9931E0(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rdx
  __int64 v24; // r8

  v2 = a1[1];
  v3 = a1[3];
  v4 = a1[4];
  v5 = a1[5];
  v6 = v3 + a2[1] + v2 + *a1;
  v7 = v2 + v4;
  v8 = a1[6];
  v4 *= 0xB492B66FBE98F273LL;
  v9 = 0xB492B66FBE98F273LL * __ROL8__(v6, 27);
  *a1 = v9;
  result = v8 ^ v9;
  v11 = __ROL8__(a2[6] + v7, 22);
  *a1 = result;
  v11 *= 0xB492B66FBE98F273LL;
  a1[1] = v11;
  v12 = a2[5] + v3 + v11;
  v13 = a1[2];
  a1[3] = v4;
  a1[4] = result + v5;
  a1[1] = v12;
  v14 = 0xB492B66FBE98F273LL * __ROL8__(v5 + v13, 31);
  a1[2] = v14;
  v15 = *a2 + v4;
  v16 = v14 + v8;
  a1[3] = v15;
  v17 = a2[3];
  v18 = __ROR8__(result + v5 + v15 + v17, 21);
  a1[4] = v18;
  v19 = a2[1] + a2[2];
  a1[5] = v16;
  a1[3] = v17 + v15 + v19;
  a1[4] = __ROL8__(v15 + v19, 20) + v15 + v18;
  v20 = a2[2] + v12;
  a1[6] = v20;
  v21 = a2[4] + v16;
  a1[5] = v21;
  v22 = a2[7];
  v23 = __ROR8__(v20 + v22 + v21, 21);
  a1[6] = v23;
  v24 = a2[5] + a2[6];
  a1[2] = result;
  *a1 = v14;
  a1[5] = v22 + v21 + v24;
  a1[6] = __ROL8__(v21 + v24, 20) + v21 + v23;
  return result;
}

