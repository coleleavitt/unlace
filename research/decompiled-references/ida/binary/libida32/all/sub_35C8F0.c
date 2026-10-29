char *__fastcall sub_35C8F0(_QWORD *a1, char *a2, unsigned int a3, unsigned int a4)
{
  char *v4; // rbp
  char v5; // al
  char v6; // r15
  __int64 (__fastcall *v7)(_QWORD *, char); // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rsi
  char *v12; // r12
  __int64 v13; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-D8h]
  _BYTE v18[136]; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp-40h]

  v4 = a2;
  v19 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 62);
    v5 = *a2;
  }
  else
  {
    if ( a4 == -1 || a3 <= 1 )
    {
      v5 = 35;
      v4 = (char *)&unk_22AD27D;
      goto LABEL_10;
    }
    v4 = *(char **)(a1[60] + 152LL);
    v5 = *v4;
  }
  if ( v5 )
  {
LABEL_10:
    while ( v5 == 35 )
    {
      v6 = v4[1];
      v12 = v4 + 1;
      switch ( v6 )
      {
        case 0:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "BADDUP", 18);
          goto LABEL_19;
        case 100:
          v4 += 2;
          btoa32(v18, 136, a3, a4);
          (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v18, 31);
          v5 = *v4;
          if ( !*v4 )
            goto LABEL_21;
          break;
        case 118:
          v12 = v4 + 2;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 60);
          goto LABEL_19;
        default:
          ++v4;
          v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v7 != sub_3598B0 )
          {
LABEL_15:
            v7(a1, v6);
            goto LABEL_9;
          }
LABEL_6:
          v8 = a1[4];
          if ( v8 )
          {
            v9 = v8 + 1;
            v10 = a1[4];
            v11 = a1[3];
            --v8;
            if ( a1[5] < v9 )
              goto LABEL_17;
          }
          else
          {
            v11 = a1[3];
            v10 = 1;
            v9 = 2;
            if ( a1[5] < 2u )
            {
LABEL_17:
              v15 = v9;
              v13 = qvector_reserve(a1 + 3, v11, v9, 1);
              v9 = v15;
              a1[3] = v13;
              v11 = v13;
            }
          }
          a1[4] = v9;
          *(_BYTE *)(v11 + v8) = v6;
          *(_BYTE *)(a1[3] + v10) = 0;
LABEL_9:
          v5 = *++v4;
          if ( !v5 )
            goto LABEL_21;
          break;
      }
    }
    v6 = *v4;
    v7 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v7 != sub_3598B0 )
      goto LABEL_15;
    goto LABEL_6;
  }
LABEL_21:
  v12 = v4;
LABEL_19:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
  return v12;
}

