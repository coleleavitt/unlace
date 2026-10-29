unsigned __int64 __fastcall sub_1F0C990(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64); // rdx
  int v12; // eax
  unsigned __int64 v13; // rbp
  _QWORD *v15; // rdx
  int v16; // esi
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  size_t v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  int v27; // [rsp+Ch] [rbp-2BCh]
  __int64 v28; // [rsp+10h] [rbp-2B8h]
  __int64 *v29; // [rsp+28h] [rbp-2A0h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-298h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-288h] BYREF
  char v32; // [rsp+48h] [rbp-280h]
  __int64 *v33; // [rsp+50h] [rbp-278h] BYREF
  char v34; // [rsp+58h] [rbp-270h]
  _QWORD *v35; // [rsp+60h] [rbp-268h] BYREF
  __int64 v36; // [rsp+68h] [rbp-260h]
  __int64 v37; // [rsp+70h] [rbp-258h]
  unsigned int v38; // [rsp+78h] [rbp-250h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-248h] BYREF
  _BYTE v40[568]; // [rsp+90h] [rbp-238h] BYREF

  v3 = a1 + 24;
  v28 = *(_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(a2) - 1));
  v5 = *(_QWORD *)(v4 + 2720);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 3144)
                 + 8 * (((unsigned int)a2 >> 3) + (unsigned int)*(_QWORD *)(v4 + 3152) - *(_QWORD *)(v4 + 3152)))
     + *(_QWORD *)(v4 + 3048);
  v7 = *(unsigned int *)(v4 + 2736);
  v30[0] = v4 + 2704;
  v8 = 8 * v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 13208);
  *(_DWORD *)(a1 + 13208) = 2;
  v9 = v8 - v7;
  v10 = *(_QWORD *)(a1 + 24);
  v30[1] = v9;
  v11 = *(__int64 (__fastcall **)(__int64))(v10 + 184);
  v27 = v5;
  if ( v11 == sub_1EA8950 )
  {
    v12 = *(_DWORD *)(a1 + 9408);
    *(_DWORD *)(a1 + 9408) = v12 + 1;
    if ( !v12 )
    {
      v17 = *(_QWORD *)(a1 + 496);
      if ( v17 )
        sub_224E010(v17);
    }
  }
  else
  {
    v11(a1 + 24);
  }
  sub_1EAF7C0((__int64 *)&v35, v4 + 2704, v6);
  if ( v35 )
  {
    v13 = 0;
    sub_1EBF0A0(a1, &v35);
    if ( v35 )
      (*(void (__fastcall **)(_QWORD *))(*v35 + 8LL))(v35);
  }
  else
  {
    sub_1EAF8B0((__int64)&v31, v4 + 2704);
    if ( (v32 & 1) != 0 )
    {
      v18 = v31;
      v31 = nullptr;
      v35 = v18;
      sub_1EBF0A0(a1, &v35);
      if ( v35 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 8LL))(v35);
      v13 = 0;
    }
    else
    {
      v15 = *(_QWORD **)(a1 + 144);
      ptr[0] = v40;
      ptr[1] = (void *)0x4000000000LL;
      v35 = v15;
      v37 = v4;
      v36 = a1;
      v38 = 0;
      sub_2027F10(&v33, v4 + 2704, (unsigned int)v31, ptr, 0);
      if ( (v34 & 1) != 0 )
      {
        v19 = v33;
        v33 = nullptr;
        v29 = v19;
        sub_1EBF0A0(a1, &v29);
        if ( v29 )
          (*(void (__fastcall **)(__int64 *))(*v29 + 8))(v29);
        v13 = 0;
      }
      else
      {
        v16 = (int)v33;
        if ( (_DWORD)v33 == 1 )
        {
          v20 = sub_1F16500(v36, v37, ptr, &v38);
          v21 = v38;
          v22 = v20 & 7;
          ++v38;
          v23 = *((_QWORD *)ptr[0] + v21);
          if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v25 = v22 | v23;
            v26 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v20 & 8) != 0 )
            {
              v25 |= *(__int64 *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL));
              v26 = (_QWORD *)*v26;
            }
            v13 = sub_A70C40(v28, (__int64)v26, v25);
          }
          else
          {
            v13 = v20 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v23 | (unsigned int)v22;
          }
        }
        else
        {
          switch ( (int)v33 )
          {
            case 3:
              v16 = 14;
              goto LABEL_19;
            case 4:
              v16 = 42;
              goto LABEL_19;
            case 5:
              v16 = 11;
              goto LABEL_19;
            case 6:
              v16 = 43;
              goto LABEL_19;
            case 7:
              v16 = 44;
              goto LABEL_19;
            case 8:
              v16 = 33;
              goto LABEL_19;
            case 9:
              v16 = 2;
              goto LABEL_19;
            case 10:
              v16 = 5;
              goto LABEL_19;
            case 11:
              v16 = 6;
              goto LABEL_19;
            case 12:
              v16 = 57;
              goto LABEL_19;
            case 13:
              v16 = 58;
              goto LABEL_19;
            case 14:
              v16 = 25;
              goto LABEL_19;
            case 15:
              v16 = 26;
              goto LABEL_19;
            case 16:
              v16 = 53;
              goto LABEL_19;
            case 17:
              v16 = 51;
              goto LABEL_19;
            case 18:
              v16 = 52;
              goto LABEL_19;
            case 19:
              v16 = 48;
              goto LABEL_19;
            case 20:
              v16 = 47;
              goto LABEL_19;
            case 21:
              v16 = 36;
              goto LABEL_19;
            case 22:
              v16 = 34;
              goto LABEL_19;
            case 23:
              v16 = 15;
              goto LABEL_19;
            case 24:
              goto LABEL_19;
            case 25:
              v16 = 46;
              goto LABEL_19;
            case 26:
              v16 = 55;
              goto LABEL_19;
            case 27:
              v16 = 29;
              goto LABEL_19;
            case 28:
              v16 = 35;
              goto LABEL_19;
            case 29:
              v16 = 50;
              goto LABEL_19;
            case 30:
              v16 = 49;
              goto LABEL_19;
            case 31:
              v16 = 20;
              goto LABEL_19;
            case 32:
              v16 = 22;
              goto LABEL_19;
            case 33:
              v16 = 4;
              goto LABEL_19;
            case 34:
              v16 = 40;
              goto LABEL_19;
            case 35:
              v16 = 38;
              goto LABEL_19;
            case 36:
              v16 = 8;
              goto LABEL_19;
            case 37:
              v16 = 45;
              goto LABEL_19;
            case 38:
              v16 = 16;
              goto LABEL_19;
            case 39:
              v16 = 54;
              goto LABEL_19;
            case 40:
              v16 = 7;
              goto LABEL_19;
            case 41:
              v16 = 1;
              goto LABEL_19;
            case 42:
              v16 = 0;
              goto LABEL_19;
            case 43:
              v16 = 41;
              goto LABEL_19;
            case 44:
              v16 = 37;
              goto LABEL_19;
            case 45:
              v16 = 17;
              goto LABEL_19;
            case 46:
              v16 = 21;
              goto LABEL_19;
            case 47:
              v16 = 18;
              goto LABEL_19;
            case 48:
              v16 = 23;
              goto LABEL_19;
            case 49:
              v16 = 30;
              goto LABEL_19;
            case 50:
              v16 = 10;
              goto LABEL_19;
            case 51:
              v16 = 19;
              goto LABEL_19;
            case 52:
              v16 = 31;
              goto LABEL_19;
            case 53:
              v16 = 32;
              goto LABEL_19;
            case 54:
              v16 = 56;
              goto LABEL_19;
            case 55:
              v16 = 9;
              goto LABEL_19;
            case 56:
              v16 = 39;
              goto LABEL_19;
            case 57:
              v16 = 12;
              goto LABEL_19;
            case 58:
              v16 = 3;
              goto LABEL_19;
            case 59:
              v16 = 27;
              goto LABEL_19;
            case 60:
              v16 = 28;
LABEL_19:
              v29 = (__int64 *)&v35;
              v13 = sub_1F0BE50(&v29, v16);
              break;
            default:
              v13 = 0;
              v24 = j__strlen("Unexpected code for type");
              sub_1EAD680(a1, "Unexpected code for type", v24);
              break;
          }
        }
      }
      sub_A0AE90((__int64 *)&v33);
      if ( ptr[0] != v40 )
        free(ptr[0]);
    }
    sub_A0AE90((__int64 *)&v31);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 192LL))(v3);
  *(_DWORD *)(a1 + 13208) = v27;
  sub_1EAF840((__int64)v30);
  return v13;
}
