__int64 __fastcall sub_187860(__int64 a1, _QWORD *a2, char a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  void (*v12)(); // rdx
  void (*v13)(void); // rax
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r11
  char *v23; // rdi
  unsigned __int8 v24; // r9
  char *v25; // rax
  char *v26; // r8
  char *v27; // rbx
  unsigned __int8 v28; // r9
  size_t v29; // rax
  __int64 v30; // rdx
  size_t v31; // r8
  size_t v32; // r11
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  char *v35; // rax
  size_t v36; // [rsp+8h] [rbp-78h]
  unsigned __int8 v37; // [rsp+10h] [rbp-70h]
  size_t v38; // [rsp+10h] [rbp-70h]
  unsigned __int8 v39; // [rsp+10h] [rbp-70h]
  __int64 v40; // [rsp+18h] [rbp-68h]
  unsigned __int8 v41; // [rsp+18h] [rbp-68h]
  __int64 v42; // [rsp+18h] [rbp-68h]
  size_t v43; // [rsp+18h] [rbp-68h]
  unsigned __int8 v44; // [rsp+20h] [rbp-60h]
  unsigned __int8 v45; // [rsp+20h] [rbp-60h]
  unsigned __int8 v46; // [rsp+20h] [rbp-60h]
  unsigned __int64 v47; // [rsp+20h] [rbp-60h]
  size_t v48; // [rsp+20h] [rbp-60h]
  __int64 v49; // [rsp+20h] [rbp-60h]
  unsigned __int8 v51; // [rsp+2Ch] [rbp-54h]
  char *s; // [rsp+30h] [rbp-50h] BYREF
  __int128 v53; // [rsp+38h] [rbp-48h]
  unsigned __int64 v54; // [rsp+48h] [rbp-38h]

  v12 = nullsub_56;
  v13 = *(void (**)(void))(*(_QWORD *)a1 + 216LL);
  v54 = __readfsqword(0x28u);
  v14 = a7;
  if ( v13 == nullsub_56 )
  {
    v15 = a3 - 32;
  }
  else
  {
    v13();
    v14 = a7;
    v15 = a3 - 32;
    if ( (unsigned __int8)(a3 - 32) > 0x54u )
    {
LABEL_5:
      v44 = v14;
      v16 = sub_18BE40((unsigned int)a3);
      if ( v16 )
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v16 + 24LL))(v16, a6, a2, a4);
      v21 = *a2;
      s = nullptr;
      v53 = 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD *))(v21 + 88))(a2);
      v23 = nullptr;
      v24 = v44;
      v25 = nullptr;
      if ( v22 )
      {
        v33 = v53;
        v34 = v22 + 1;
        if ( (unsigned __int64)v53 < v22 + 1 )
        {
          if ( *((_QWORD *)&v53 + 1) < v34 )
          {
            v39 = v44;
            v42 = v22;
            v49 = v22 + 1;
            v25 = (char *)qvector_reserve();
            v33 = v53;
            v24 = v39;
            s = v25;
            v22 = v42;
            v34 = v49;
          }
          v37 = v24;
          v40 = v22;
          v47 = v34;
          memset(&v25[v33], 0, v34 - v33);
          v23 = s;
          v22 = v40;
          v24 = v37;
          *(_QWORD *)&v53 = v47;
        }
        else if ( v34 != (_QWORD)v53 )
        {
          *(_QWORD *)&v53 = v22 + 1;
        }
        v23[v22] = 0;
        v26 = s;
      }
      else
      {
        v26 = nullptr;
      }
      v45 = v24;
      (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(*a2 + 96LL))(a2, v26, v53);
      v27 = s;
      v28 = v45;
      if ( (_QWORD)v53 && (v29 = strlen(s), v28 = v45, v30 = v53, (v31 = v29) != 0) )
      {
        v32 = v29 + 1;
        if ( (unsigned __int64)v53 < v29 + 1 )
        {
          if ( *((_QWORD *)&v53 + 1) < v32 )
          {
            v36 = v29;
            v43 = v29 + 1;
            v35 = (char *)qvector_reserve();
            v30 = v53;
            v31 = v36;
            s = v35;
            v27 = v35;
            v28 = v45;
            v32 = v43;
          }
          v38 = v31;
          v41 = v28;
          v48 = v32;
          memset(&v27[v30], 0, v32 - v30);
          v27 = s;
          v28 = v41;
          v31 = v38;
          *(_QWORD *)&v53 = v48;
        }
        else if ( (_QWORD)v53 != v29 + 1 )
        {
          *(_QWORD *)&v53 = v29 + 1;
        }
        v27[v31] = 0;
      }
      else if ( s )
      {
        v46 = v28;
        v53 = 0u;
        qfree();
        s = nullptr;
        v28 = v46;
      }
      result = sub_184E00(a1, (const char *)a4, a5, (__int64)&s, a3, v28, a6);
      if ( s )
      {
        v51 = result;
        *(_QWORD *)&v53 = 0;
        qfree();
        return v51;
      }
      return result;
    }
  }
  switch ( v15 )
  {
    case 0:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*a2 + 176LL))(
        a2,
        a4,
        1024,
        a4,
        a5,
        v14);
      goto LABEL_8;
    case 34:
    case 43:
    case 75:
      return 0;
    case 35:
    case 50:
    case 67:
    case 82:
      *(_WORD *)a4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, void (*)(), __int64, __int64, __int64))(*a2 + 176LL))(
                       a2,
                       *(unsigned int *)(a6 + 48),
                       v12,
                       a4,
                       a5,
                       v14);
      goto LABEL_8;
    case 37:
      v20 = a2[20];
      if ( v20 )
      {
        if ( a4 )
          sub_196770(v20, a4, v12, a4, a5, v14);
      }
      goto LABEL_8;
    case 39:
    case 71:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*a2 + 96LL))(
        a2,
        a4,
        2,
        a4,
        a5,
        v14);
      goto LABEL_8;
    case 66:
      if ( *((_BYTE *)a2 + 116) )
      {
        *(_DWORD *)a4 = THistory::currentIndex(**(THistory ***)(a6 + 8));
      }
      else
      {
        *(_QWORD *)(a4 + 8) = 0;
        v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, void (*)(), __int64, __int64, __int64))(*a2 + 88LL))(
                a2,
                a2,
                v12,
                a4,
                a5,
                v14);
        sub_1877C0((__int64 *)a4, v18);
        if ( *(_QWORD *)(a4 + 8) )
          v19 = *(char **)a4;
        else
          v19 = &byte_251020;
        (*(void (__fastcall **)(_QWORD *, char *))(*a2 + 96LL))(a2, v19);
      }
      goto LABEL_8;
    case 84:
      sub_18D9F0(a2, a4 + 8, v12, a4, a5, v14);
LABEL_8:
      result = 1;
      break;
    default:
      goto LABEL_5;
  }
  return result;
}

