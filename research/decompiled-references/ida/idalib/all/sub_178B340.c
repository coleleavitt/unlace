__int64 __fastcall sub_178B340(unsigned __int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4, char a5, __m128i a6)
{
  __int64 v8; // rdx
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // r14
  unsigned int v12; // ebp
  unsigned __int8 v14; // al
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  char v37; // al
  __int64 v38; // [rsp+8h] [rbp-F0h]
  unsigned int v39; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v40; // [rsp+18h] [rbp-E0h] BYREF
  _BYTE *v41; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v42; // [rsp+28h] [rbp-D0h]
  _QWORD v43[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE **v44; // [rsp+40h] [rbp-B8h]
  __int64 *v45; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v46; // [rsp+50h] [rbp-A8h] BYREF
  char v47; // [rsp+A8h] [rbp-50h]
  unsigned int v48; // [rsp+B0h] [rbp-48h]
  char v49; // [rsp+B4h] [rbp-44h]

  v41 = a3;
  v8 = *(_QWORD *)(a1 + 544);
  v42 = a4;
  v9 = *(_BYTE *)(v8 + 8);
  v39 = a2;
  v10 = v9 & 0x7F;
  if ( (unsigned int)v10 - 34 <= 5 )
  {
    v11 = v8 - 72;
    if ( v8 != 72 )
    {
      LOBYTE(v40) = 0;
      v12 = a2;
      v43[1] = &v39;
      v44 = &v41;
      v43[0] = a1;
      v45 = &v40;
      v14 = *(_BYTE *)(v8 - 44) & 0x7F;
      if ( (unsigned int)v14 - 35 > 3 )
        goto LABEL_6;
      if ( v14 == 38 )
      {
        v23 = sub_1785130((__int64)v43, 0);
      }
      else
      {
        if ( v14 != 36 )
        {
LABEL_6:
          v38 = v8;
          v15 = sub_B81C90(v8 - 72);
          v17 = v38;
          if ( v15 )
          {
            v23 = sub_1785130((__int64)v43, 2);
          }
          else
          {
            if ( (*(_BYTE *)(v38 + 12) & 3) != 0 )
            {
              a2 = 3 * (unsigned int)((*(_BYTE *)(v38 + 12) & 3) == 2) + 3;
              sub_1785130((__int64)v43, a2);
              v17 = v38;
            }
            v18 = *(_QWORD *)(*(_QWORD *)(v17 - 24) & 0xFFFFFFFFFFFFFFF0LL);
            v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 25;
            if ( (unsigned int)v19 > 1 )
              v18 = sub_F63050(v18, a2, v19, v16);
            v20 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFFFFFF0LL));
            if ( v20 && (*(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v20 + 17) & 4) == 0 )
            {
              a2 = 4;
              sub_1785130((__int64)v43, 4);
            }
            if ( sub_B748A0(v11, a2, v21, v22) )
              sub_1785130((__int64)v43, 5);
            v23 = v40 ^ 1;
          }
          goto LABEL_18;
        }
        v23 = sub_1785130((__int64)v43, 1);
      }
LABEL_18:
      if ( !v23 )
        return 0;
      v24 = *(unsigned int *)(a1 + 40);
      if ( !(_DWORD)v24 )
        BUG();
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v24 - 8);
      if ( !*(_DWORD *)(v25 + 12) && !a5 )
      {
        *(_DWORD *)(v25 + 12) = v12;
        if ( a4 == 8 )
        {
          if ( *(_QWORD *)a3 == 0x74696177615F6F63LL )
          {
            v37 = 1;
          }
          else
          {
            v37 = 0;
            if ( *(_QWORD *)a3 == 0x646C6569795F6F63LL )
              v37 = 2;
          }
        }
        else
        {
          v37 = 0;
        }
        *(_BYTE *)(v25 + 10) = (4 * v37) | *(_BYTE *)(v25 + 10) & 0xF3;
      }
      if ( !*(_QWORD *)(v25 + 184) )
      {
        if ( !(unsigned __int8)sub_178ACC0(a1, v12, a6) )
          return 0;
        v29 = sub_1786260((__int64 *)a1, v12, *(double *)a6.m128i_i64, v27, v28);
        *(_QWORD *)(v25 + 184) = v29;
        if ( !v29 )
          return 0;
      }
      return v25;
    }
  }
  sub_168B9F0((__int64)v43, (__int64 *)(a1 + 8), v39, (v10 != 18) + 3523, 0);
  if ( v47 )
  {
    v25 = 0;
    sub_AEC220(&v46, v41, v42);
    sub_15F7200(v43);
  }
  else
  {
    if ( v49 )
    {
      v32 = sub_168B9E0(v43);
      v35 = (__int64)v44;
      if ( v44 )
        v35 = (*((__int64 (__fastcall **)(_BYTE **))*v44 + 4))(v44);
      v40 = v35;
      v36 = sub_1587BC0(v32, &v40, v30, v31, v33, v34);
      sub_AEC220((unsigned __int8 **)(*v36 + 32LL * v48 + 8), v41, v42);
    }
    v25 = 0;
    sub_15F7200(v43);
  }
  return v25;
}
