unsigned __int64 __fastcall sub_E160(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rdx
  const char *v4; // rdx
  const char *v5; // rdx
  const char *v6; // rdx
  int v7; // ebx
  _QWORD *v8; // rcx
  const char *v9; // rsi
  size_t v10; // rdx
  int v11; // r12d
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  char *v17; // rcx
  size_t v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // rsi
  size_t v21; // r8
  char *v22; // rcx
  unsigned __int64 v23; // r14
  unsigned int v24; // r12d
  unsigned __int64 v25; // r14
  char *v26; // rax
  unsigned __int64 v27; // r15
  size_t v28; // r15
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  size_t v32; // [rsp+0h] [rbp-68h]
  char *src; // [rsp+8h] [rbp-60h]
  char *v34; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v1 = a1[9];
  if ( a1[8] <= v1 )
    return 0;
  a1[9] = v1 + 1;
  switch ( *(_BYTE *)(a1[7] + v1) )
  {
    case 'B':
      v3 = sub_BAC0(a1, 19, "Builtin.UnsafeValueBuffer", 0x19u);
      return sub_CD20(a1, 221, v3);
    case 'D':
      v3 = sub_BAC0(a1, 19, "Builtin.DefaultActorStorage", 0x1Bu);
      return sub_CD20(a1, 221, v3);
    case 'I':
      v4 = "Builtin.IntLiteral";
      goto LABEL_9;
    case 'O':
      v3 = sub_BAC0(a1, 19, "Builtin.UnknownObject", 0x15u);
      return sub_CD20(a1, 221, v3);
    case 'b':
      v5 = "Builtin.BridgeObject";
      goto LABEL_12;
    case 'c':
      v3 = sub_BAC0(a1, 19, "Builtin.RawUnsafeContinuation", 0x1Du);
      return sub_CD20(a1, 221, v3);
    case 'd':
      v3 = sub_BAC0(a1, 19, "Builtin.NonDefaultDistributedActorStorage", 0x29u);
      return sub_CD20(a1, 221, v3);
    case 'e':
      v6 = "Builtin.Executor";
      goto LABEL_16;
    case 'f':
      v7 = sub_D180(a1);
      if ( (unsigned int)(v7 - 2) > 0xFFF )
        return 0;
      v8 = a1;
      v9 = "Builtin.FPIEEE";
      v34 = nullptr;
      n = 0;
      v10 = 14;
      goto LABEL_19;
    case 'i':
      v7 = sub_D180(a1);
      if ( (unsigned int)(v7 - 2) > 0xFFF )
        return 0;
      v8 = a1;
      v9 = "Builtin.Int";
      v34 = nullptr;
      n = 0;
      v10 = 11;
LABEL_19:
      sub_C6F0(&v34, v9, v10, v8);
      sub_C820(&v34, v7 - 1, a1);
      v3 = sub_C5B0(a1, 19, (__int64 *)&v34);
      break;
    case 'j':
      v3 = sub_BAC0(a1, 19, "Builtin.Job", 0xBu);
      break;
    case 'o':
      v5 = "Builtin.NativeObject";
LABEL_12:
      v3 = sub_BAC0(a1, 19, v5, 0x14u);
      break;
    case 'p':
      v4 = "Builtin.RawPointer";
LABEL_9:
      v3 = sub_BAC0(a1, 19, v4, 0x12u);
      break;
    case 't':
      v6 = "Builtin.SILToken";
LABEL_16:
      v3 = sub_BAC0(a1, 19, v6, 0x10u);
      break;
    case 'v':
      v11 = sub_D180(a1);
      if ( (unsigned int)(v11 - 2) > 0xFFF )
        return 0;
      v12 = sub_E0A0((__int64)a1);
      v13 = (_QWORD *)v12;
      if ( !v12 )
        return 0;
      if ( *(_WORD *)(v12 + 16) != 19 )
        return 0;
      v14 = *(_QWORD **)v12;
      if ( v13[1] <= 7u || *v14 != 0x2E6E69746C697542LL )
        return 0;
      v34 = nullptr;
      n = 0;
      sub_C6F0(&v34, "Builtin.Vec", 0xBu, a1);
      sub_C820(&v34, v11 - 1, a1);
      v15 = (unsigned int)n;
      v16 = HIDWORD(n);
      if ( (unsigned int)n >= HIDWORD(n) )
      {
        v20 = v34;
        v21 = HIDWORD(n);
        v22 = (char *)a1[1];
        if ( v22 == &v34[HIDWORD(n)] && (unsigned __int64)(v22 + 1) <= a1[2] )
        {
          a1[1] = v22 + 1;
          v17 = v20;
          HIDWORD(n) = v16 + 1;
        }
        else
        {
          v23 = (unsigned int)(2 * HIDWORD(n));
          v24 = 2 * HIDWORD(n);
          if ( v23 < 4 )
            v23 = 4;
          v25 = HIDWORD(n) + v23;
          if ( !v22 || (v26 = &v22[v25], (unsigned __int64)&v22[v25] > a1[2]) )
          {
            src = v34;
            v32 = HIDWORD(n);
            v27 = 2LL * a1[4];
            if ( v27 < v25 + 1 )
              v27 = v25 + 1;
            a1[4] = v27;
            v28 = v27 + 8;
            v29 = malloc(v28);
            v30 = a1[3];
            v20 = src;
            v22 = (char *)(v29 + 1);
            a1[3] = v29;
            v21 = v32;
            *v29 = v30;
            a1[2] = (char *)v29 + v28;
            v26 = (char *)v29 + v25 + 8;
          }
          a1[1] = v26;
          v34 = (char *)memcpy(v22, v20, v21);
          v17 = v34;
          v31 = 4;
          if ( v24 >= 4 )
            v31 = v24;
          HIDWORD(n) += v31;
          v15 = (unsigned int)n;
        }
      }
      else
      {
        v17 = v34;
      }
      LODWORD(n) = v15 + 1;
      v18 = 0;
      v17[v15] = 120;
      v19 = v13[1];
      if ( v19 > 7 )
      {
        v18 = v19 - 8;
        v19 = 8;
      }
      sub_C6F0(&v34, (const void *)(v19 + *v13), v18, a1);
      v3 = sub_C5B0(a1, 19, (__int64 *)&v34);
      break;
    case 'w':
      v3 = sub_BAC0(a1, 19, "Builtin.Word", 0xCu);
      break;
    default:
      return 0;
  }
  return sub_CD20(a1, 221, v3);
}

