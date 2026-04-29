unsigned __int64 __fastcall sub_13A80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rsi
  int v13; // ebx
  __int64 j; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned __int64 v22; // [rsp+0h] [rbp-108h]
  __int64 i; // [rsp+8h] [rbp-100h]
  __int64 v24; // [rsp+10h] [rbp-F8h]
  __int64 v25; // [rsp+18h] [rbp-F0h]
  __int64 v26; // [rsp+20h] [rbp-E8h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v28; // [rsp+48h] [rbp-C0h]
  char v29; // [rsp+5Bh] [rbp-ADh] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v39[4]; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-40h]

  v2 = a1[36];
  v41 = __readfsqword(0x28u);
  v26 = v2;
  if ( v2 )
  {
    v25 = 0;
    for ( i = 1; ; ++i )
    {
      v31 = 0;
      v29 = 0;
      v4 = (_QWORD *)(a1[35] + v25);
      v32 = 0;
      v35 = 0;
      v5 = v4[32];
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *, __int64 *))(v5 + 304))(
              *(_QWORD *)(*v4 + 24LL),
              &v32,
              &v29,
              &v31,
              &v35) )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(v5 + 320))(
                v31,
                &v33,
                &v34,
                &v35) )
        {
          v6 = v34;
          if ( v34 >= 0 )
          {
            v22 = -1;
            v7 = 0;
            v24 = 0;
            do
            {
              if ( v7 >= v6 )
              {
                memset(v39, 0, sizeof(v39));
                v40 = 0;
                v36 = 0;
                if ( !(unsigned __int8)sub_9A3B0(*(_QWORD *)(*v4 + 16LL), v39, v4) )
                  break;
                v30 = 1;
                v38 = v39[3];
                if ( v22 == -1 || !v24 )
                {
LABEL_38:
                  v22 = -1;
                  goto LABEL_20;
                }
              }
              else
              {
                v8 = *(_QWORD *)(v33 + 8 * v7);
                if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v5 + 360))(v8, &v36, &v35)
                  || (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v5 + 352))(v8, &v37, &v35)
                  || (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, __int64 *))(v5 + 376))(v8, &v38, &v35)
                  || (*(unsigned int (__fastcall **)(__int64, int *, __int64 *))(v5 + 344))(v8, &v30, &v35) )
                {
                  goto LABEL_20;
                }
                v9 = v36;
                if ( v22 == -1 )
                {
                  v22 = v38;
                  v27 = v36;
                }
                else
                {
                  v27 = v24;
                }
                set_source_linnum(v38, v37);
                if ( !v30 && v9 == v24 )
                {
                  v24 = v27;
                  goto LABEL_20;
                }
                if ( !v27 || v22 == -1 )
                {
                  v24 = v27;
                  goto LABEL_18;
                }
                v24 = v27;
              }
              v28 = v38;
              if ( v38 < v22 )
              {
                v28 = v22;
                v22 = v38;
              }
              memset(v39, 0, 24);
              sub_963A0(v4, (unsigned int)(v24 - 1), v39);
              if ( v22 < getinf(19) || getinf(20) < v28 )
              {
                if ( (debug & 0x400000) != 0 )
                {
                  v12 = src;
                  if ( v39[1] )
                    LODWORD(v12) = v39[0];
                  sub_88B80(
                    (unsigned int)"Not applying file name (%s) on range: %a -> %a\n",
                    (_DWORD)v12,
                    v22,
                    v28,
                    v10,
                    v11,
                    v22);
                }
              }
              else
              {
                if ( (debug & 0x400000) != 0 )
                {
                  v16 = src;
                  if ( v39[1] )
                    LODWORD(v16) = v39[0];
                  sub_88B80((unsigned int)"Range %a -> %a: file \"%s\"\n", v22, v28, (_DWORD)v16, v10, v11, v22);
                }
                v17 = src;
                if ( v39[1] )
                  v17 = (const char *)v39[0];
                if ( !(unsigned __int8)add_sourcefile(v22, v28, v17) && (debug & 0x400000) != 0 )
                  sub_88B80((unsigned int)"...FAILED!\n", v28, v18, v19, v20, v21, v22);
              }
              if ( v39[0] )
              {
                v39[1] = 0;
                qfree(v39[0]);
              }
LABEL_18:
              if ( v30 )
                goto LABEL_38;
              v24 = v36;
              v22 = v38;
LABEL_20:
              v6 = v34;
              ++v7;
            }
            while ( v34 >= v7 );
          }
        }
        (*(void (__fastcall **)(__int64))(v5 + 312))(v31);
      }
      if ( a2 )
      {
        (*(void (**)(__int64, const char *, ...))(*(_QWORD *)a2 + 8LL))(a2, "Lines: Compile unit %d of %d", i, v26);
        (**(void (__fastcall ***)(__int64))a2)(a2);
      }
      v25 += 264;
      if ( v26 == i )
        break;
    }
  }
  v13 = 0;
  for ( j = 0; (unsigned __int64)v13 < a1[14]; j = v13 )
  {
    ++v13;
    sub_13A80(*(_QWORD *)(a1[13] + 8 * j), a2);
  }
  return v41 - __readfsqword(0x28u);
}
