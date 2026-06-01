__int64 __fastcall sub_1F8250(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rbp
  unsigned __int8 v7; // r12
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  __int128 v14; // xmm1
  double v15; // xmm0_8
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  int v23; // eax
  _BYTE *v24; // r13
  __int64 v25; // rax
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  _BYTE *v32; // rbp
  const char *v33; // rsi
  char *v35; // rsi
  int v36; // eax
  struct _Unwind_Exception *v37; // rbx
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int64 v39[2]; // [rsp+10h] [rbp-A8h] BYREF
  double v40; // [rsp+20h] [rbp-98h]
  int v41; // [rsp+28h] [rbp-90h]
  int v42; // [rsp+2Ch] [rbp-8Ch]
  int v43; // [rsp+30h] [rbp-88h]
  _QWORD *v44; // [rsp+38h] [rbp-80h]
  char v45[16]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-58h] BYREF
  __int64 v49; // [rsp+68h] [rbp-50h]
  _QWORD v50[9]; // [rsp+70h] [rbp-48h] BYREF

  v50[3] = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = (__int64)a2;
    v7 = a3;
    if ( *(_BYTE *)(a1 + 968) )
    {
      v8 = *(_QWORD **)(a1 + 424);
      a3 = (__int64)v8;
      if ( !v8 )
        goto LABEL_68;
      v9 = *(_DWORD *)(a1 + 416);
      switch ( v9 )
      {
        case 2:
          v10 = *(__int64 **)(a1 + 896);
          break;
        case 3:
          v10 = *(__int64 **)(a1 + 904);
          break;
        case 1:
          v10 = *(__int64 **)(a1 + 888);
          break;
        default:
          v11 = *(__int64 **)(a1 + 896);
          if ( a2 == v11 || !v11 )
            goto LABEL_16;
LABEL_14:
          sub_2C23C0(v11, a2, a3);
          v12 = *(_QWORD *)(a1 + 896);
          *(_BYTE *)(v12 + 409) = 0;
          QT::QBasicTimer::stop((QT::QBasicTimer *)(v12 + 420));
          goto LABEL_15;
      }
      if ( a2 == v10 )
        return 1;
      v11 = *(__int64 **)(a1 + 896);
      if ( a2 == v11 || !v11 )
      {
LABEL_16:
        v13 = *(_DWORD *)(a1 + 412);
        if ( a2 == *(__int64 **)(a1 + 888) )
        {
          v14 = 0;
          v17 = 1;
          v16 = -1;
          v15 = 0.0;
        }
        else
        {
          v14 = *(_OWORD *)(a1 + 384);
          v15 = *(double *)(a1 + 400);
          v16 = *(_DWORD *)(a1 + 408);
          if ( a2 == *(__int64 **)(a1 + 896) )
          {
            v17 = 2;
          }
          else
          {
            v17 = 0;
            if ( a2 == *(__int64 **)(a1 + 904) )
              v17 = 3;
          }
        }
        v41 = v16;
        v42 = v13;
        v43 = v17;
        *(_OWORD *)v39 = v14;
        v40 = v15;
        v18 = *v8;
        v44 = v8;
        v19 = (*(__int64 (**)(void))(v18 + 16))();
        v22 = *(_BYTE *)(a1 + 968) == 0;
        v44 = (_QWORD *)v19;
        if ( v22 )
          goto LABEL_29;
        if ( !*(_QWORD *)(a1 + 424) )
          goto LABEL_70;
        v23 = *(_DWORD *)(a1 + 416);
        switch ( v23 )
        {
          case 2:
            v24 = *(_BYTE **)(a1 + 896);
            break;
          case 3:
            v24 = *(_BYTE **)(a1 + 904);
            break;
          case 1:
            v24 = *(_BYTE **)(a1 + 888);
            break;
          default:
            goto LABEL_29;
        }
        if ( v24 && v24[29] )
        {
          v25 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v24 + 176LL))(v24, 0);
          v26 = sub_175500((__int64)v24, v25, (__int16)v42);
          *(_WORD *)(a1 + 956) = v26;
          goto LABEL_30;
        }
LABEL_29:
        v26 = *(_WORD *)(a1 + 956);
LABEL_30:
        if ( v26 != (__int16)0x8000 && *((_BYTE *)a2 + 29) )
        {
          v15 = 0.0;
          v35 = v45;
          *(_OWORD *)v45 = 0;
          v46 = 0;
          v47 = -1;
          v48 = 0;
          v49 = 0;
          if ( (unsigned __int8)sub_174EF0(v6, (__int64)v45) )
          {
            v35 = (char *)v38;
            if ( v38 )
            {
              v36 = sub_1755E0(v6, v38, *(_WORD *)(a1 + 956));
              if ( v36 >= 0 )
              {
                LOWORD(v42) = v36;
                *(_WORD *)(a1 + 956) = 0x8000;
              }
            }
          }
          if ( v49 )
            qfree(v49, v35);
        }
        sub_1E96E0((QT::QObject *)v45, v15, a1, 0);
        if ( !(_BYTE)v47 && v46 && *(_DWORD *)(v46 + 964) == 1 )
          dto_copy_to_inf(&v48);
        *(_QWORD *)v45 = &object_lifecycle_monitor_t___vtable;
        QT::QObject::~QObject((QT::QObject *)v45);
        v27 = *(_QWORD *)(a1 + 480);
        a2 = v39;
        v50[0] = 0;
        v8 = (_QWORD *)(a1 + 384);
        v50[1] = v27;
        sub_1F0EE0(a1 + 384, (__m128i *)v39, v50, 3 - (unsigned int)v7, 0, v28, v15);
        if ( !*(_BYTE *)(a1 + 968) )
        {
          v32 = nullptr;
LABEL_42:
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v32 + 336LL))(v32);
          v33 = (const char *)(unsigned int)*(__int16 *)(a1 + 956);
          if ( *(_WORD *)(a1 + 956) != 0x8000 )
          {
            if ( v32[29] )
              sub_1756A0((__int64)v32, *(_WORD *)(a1 + 956));
            *(_WORD *)(a1 + 956) = 0x8000;
          }
          if ( v44 )
            qfree(v44, v33);
          return 1;
        }
        if ( *(_QWORD *)(a1 + 424) )
        {
          v31 = *(_DWORD *)(a1 + 416);
          if ( v31 == 2 )
          {
            v32 = *(_BYTE **)(a1 + 896);
          }
          else if ( v31 == 3 )
          {
            v32 = *(_BYTE **)(a1 + 904);
          }
          else
          {
            v32 = nullptr;
            if ( v31 == 1 )
              v32 = *(_BYTE **)(a1 + 888);
          }
          goto LABEL_42;
        }
        sub_1E69C0(v15, (__int64)v8, (__int64)v39, v29, v30);
LABEL_70:
        v37 = (struct _Unwind_Exception *)sub_1E69C0(v15, (__int64)v8, (__int64)a2, v20, v21);
        if ( v44 )
          qfree(v44, (const char *)a2);
        _Unwind_Resume(v37);
      }
      goto LABEL_14;
    }
    v11 = *(__int64 **)(a1 + 896);
    if ( !v11 || v11 == a2 )
    {
LABEL_15:
      v8 = *(_QWORD **)(a1 + 424);
      if ( v8 )
        goto LABEL_16;
LABEL_68:
      sub_1E69C0(a5, (__int64)v8, (__int64)a2, a3, a4);
    }
    goto LABEL_14;
  }
  return 0;
}
