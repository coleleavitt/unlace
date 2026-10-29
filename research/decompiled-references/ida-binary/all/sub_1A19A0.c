__int64 __fastcall sub_1A19A0(
        int a1,
        const char *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rbx
  const char *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int v25; // r8d
  int v26; // r9d
  size_t v27; // rax
  size_t v28; // rbx
  size_t v29; // r14
  char *v30; // rdi
  _BYTE v31[4]; // [rsp+Ch] [rbp-F4h] BYREF
  _QWORD v32[3]; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  unsigned __int64 v43; // [rsp+C8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  sub_277730(v31, 0xFFFFFFFFLL);
  switch ( a1 )
  {
    case 0:
    case 3:
      sub_1A1880((__int64)a2, a3);
    case 1:
      sub_4C0490(v32, "Information", 1, 2, &unk_5C2F25, 0, 0, 1, a2, a3);
      v18 = sub_4797E0(v32, 2, 0);
      v32[0] = message_box_request_t___vtable;
      if ( v41 )
      {
        v42 = 0;
        qfree(v41, (_BYTE *)&dword_0 + 2);
      }
      if ( v39 )
      {
        v40 = 0;
        qfree(v39, (_BYTE *)&dword_0 + 2);
      }
      if ( v37 )
      {
        v38 = 0;
        qfree(v37, (_BYTE *)&dword_0 + 2);
      }
      if ( v35 )
      {
        v36 = 0;
        qfree(v35, (_BYTE *)&dword_0 + 2);
      }
      if ( v33 )
      {
        v34 = 0;
        qfree(v33, (_BYTE *)&dword_0 + 2);
      }
      goto LABEL_12;
    case 2:
      if ( !(_BYTE)byte_8CAD10 && __cxa_guard_acquire(&byte_8CAD10) )
      {
        obj = nullptr;
        xmmword_8CAD28 = 0;
        __cxa_atexit((void (*)(void *))sub_16B530, &obj, &off_85BC80);
        __cxa_guard_release(&byte_8CAD10);
      }
      v20 = &s1;
      if ( (_QWORD)xmmword_8CAD28 )
        v20 = obj;
      v21 = strcmp(v20, a2);
      v22 = 3;
      if ( v21 )
      {
        if ( a2 && (v27 = strlen(a2), (v28 = v27) != 0) )
        {
          v29 = v27 + 1;
          v30 = obj;
          if ( *((_QWORD *)&xmmword_8CAD28 + 1) < v27 + 1 )
          {
            obj = (char *)qvector_reserve(&obj, obj, v27 + 1, 1);
            v30 = obj;
          }
          *(_QWORD *)&xmmword_8CAD28 = v29;
          memmove(v30, a2, v28);
          v22 = 0;
          obj[v28] = 0;
        }
        else
        {
          *(_QWORD *)&xmmword_8CAD28 = 0;
          v22 = 0;
        }
      }
      sub_4C0490(v32, "Warning", 3, v22, &unk_5C2F25, 0, 0, 1, a2, a3);
      v18 = sub_4797E0(v32, 2, 0);
      v32[0] = message_box_request_t___vtable;
      if ( v41 )
      {
        v42 = 0;
        qfree(v41, (_BYTE *)&dword_0 + 2);
      }
      if ( v39 )
      {
        v40 = 0;
        qfree(v39, (_BYTE *)&dword_0 + 2);
      }
      if ( v37 )
      {
        v38 = 0;
        qfree(v37, (_BYTE *)&dword_0 + 2);
      }
      if ( v35 )
      {
        v36 = 0;
        qfree(v35, (_BYTE *)&dword_0 + 2);
      }
      if ( v33 )
      {
        v34 = 0;
        qfree(v33, (_BYTE *)&dword_0 + 2);
      }
LABEL_12:
      v32[0] = &off_86FF78;
      qsem_free(v32[2]);
      break;
    case 4:
      sub_1A17F0((__int64)a2, a3, v12, v13, v14, v15);
    case 5:
      sub_1A0D10((__int64)a2, a3, a4, a5, a6, a7, v16, v17, a10, a11, v12, v13, v14, v15);
      goto LABEL_30;
    case 6:
      sub_16B930((__int64)"The input file read error");
    case 7:
      sub_16B930((__int64)"The output file write error");
    case 8:
      sub_16B930((__int64)"The input file structure error");
    case 9:
      if ( batch || sub_1A15A0() )
        goto LABEL_30;
      sub_543020((_DWORD)QT::QCoreApplication::self + 16, (_DWORD)a2, a3, 1, v23, v24);
      v18 = 0;
      break;
    case 11:
      if ( batch || sub_1A15A0() )
        goto LABEL_30;
      sub_543020((_DWORD)QT::QCoreApplication::self + 16, (_DWORD)a2, a3, 0, v25, v26);
      v18 = 0;
      break;
    default:
LABEL_30:
      v18 = 0;
      break;
  }
  sub_277860(v31);
  return v18;
}
