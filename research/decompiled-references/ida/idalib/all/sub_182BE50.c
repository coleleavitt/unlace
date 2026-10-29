void __fastcall sub_182BE50(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __m128i *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  size_t v17; // r14
  _BYTE *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  unsigned int v22; // [rsp+4h] [rbp-164h] BYREF
  int v23; // [rsp+8h] [rbp-160h] BYREF
  __int64 v24; // [rsp+Ch] [rbp-15Ch] BYREF
  __int64 v25; // [rsp+14h] [rbp-154h] BYREF
  char v26; // [rsp+1Ch] [rbp-14Ch]
  int v27; // [rsp+20h] [rbp-148h] BYREF
  __int64 v28; // [rsp+28h] [rbp-140h]
  int v29; // [rsp+30h] [rbp-138h]
  unsigned int v30; // [rsp+34h] [rbp-134h]
  __int64 *v31; // [rsp+40h] [rbp-128h] BYREF
  signed __int64 v32; // [rsp+48h] [rbp-120h]
  __int64 v33; // [rsp+50h] [rbp-118h] BYREF
  __int64 v34[3]; // [rsp+60h] [rbp-108h] BYREF
  void *v35; // [rsp+78h] [rbp-F0h]
  _BYTE v36[24]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v37[200]; // [rsp+A0h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_182B6A0(a1, a2, (__int64)a3, (__int64)&v27, a4) )
  {
    v5 = a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int8)sub_16211A0(a1, a3, v5, &v22, 3, 0) )
    {
      v6 = v22;
      if ( !v22 )
        goto LABEL_10;
      if ( v27 == 2 )
      {
        sub_168B9F0((__int64)v37, a1 + 1, a3[1].m128i_u32[2], 0xF04u, 0);
        v25 = sub_EEC8C0(v5, (__int64)(a1 + 1), a4);
        v16 = sub_1587DB0((__int64)v37, &v25);
        v17 = j__strlen("0");
        v31 = (__int64 *)sub_EEC8C0(v5, (__int64)&v25, a4);
        LOBYTE(v32) = 1;
        sub_18056E0((__int64)v34, (__int64)v31, 1, "0", v17);
        sub_1589170(v16, v34);
        v18 = v35;
        if ( v35 == v36 )
          goto LABEL_19;
      }
      else
      {
        v7 = sub_B8DC30(a2, 1);
        if ( v7 )
        {
          LOBYTE(v7) = (unsigned __int8)BYTE3(*(_QWORD *)(v7 + 16)) >> 7;
        }
        else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
        {
          LOBYTE(v7) = (*(_BYTE *)(a2 + 49) & 0x20) != 0;
        }
        else
        {
          v7 = (*(_QWORD *)(a2 + 56) >> 18) & 1LL;
        }
        if ( !(_BYTE)v7 )
        {
          sub_168B9F0((__int64)v37, a1 + 1, *(_DWORD *)(a2 + 24), 0x1B2Du, 0);
          sub_15DD120((__int64)v37, (__int64)a3);
          sub_15F7200(v37);
          v8 = v30;
          v6 = v22;
          if ( v30 >= v22 )
          {
            sub_168B9F0((__int64)v37, a1 + 1, a3[1].m128i_u32[2], 0xC54u, 0);
            v14 = sub_15DD120((__int64)v37, (__int64)a3);
            LODWORD(v31) = 3;
            v15 = sub_1587D10(v14, (int *)&v31);
            v34[0] = sub_EEC8C0(v5, (__int64)&v31, a4);
            sub_1587DB0(v15, v34);
            sub_15F7200(v37);
            return;
          }
          goto LABEL_11;
        }
        v6 = v22;
        if ( v29 + 1 == v22 )
        {
LABEL_10:
          v8 = v30;
LABEL_11:
          v9 = sub_1807E60((__int64)a1, a2, a3, v28, v8, v6);
          if ( v9 )
            sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
          return;
        }
        sub_168B9F0((__int64)v37, a1 + 1, a3[1].m128i_u32[2], 0xC54u, 0);
        v19 = sub_15DD120((__int64)v37, (__int64)a3);
        v23 = 3;
        v20 = sub_1587D10(v19, &v23);
        v24 = sub_EEC8C0(v5, (__int64)&v23, a4);
        v21 = sub_1587DB0(v20, &v24);
        sub_D8B070(
          &v31,
          (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
          16,
          (__int64)"%u",
          v29 + 1);
        v25 = sub_EEC8C0(v5, (__int64)&vsnprintf, a4);
        v26 = 1;
        sub_18056E0((__int64)v34, v25, 1, v31, v32);
        sub_1589170(v21, v34);
        if ( v35 != v36 )
          operator delete(v35);
        v18 = v31;
        if ( v31 == &v33 )
        {
LABEL_19:
          sub_15F7200(v37);
          return;
        }
      }
      operator delete(v18);
      goto LABEL_19;
    }
  }
}
