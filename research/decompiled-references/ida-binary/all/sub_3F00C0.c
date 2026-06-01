__int64 __fastcall sub_3F00C0(__int64 a1, char **a2, __int64 a3)
{
  char *v4; // rax
  _QWORD *v6; // rcx
  const char *v7; // rsi
  unsigned int v8; // r14d
  char v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  char *v16; // rax
  _QWORD *v17; // rdi
  char **v19; // [rsp+10h] [rbp-248h]
  _BYTE v20[32]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v21[24]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v22; // [rsp+58h] [rbp-200h]
  __int64 v23; // [rsp+60h] [rbp-1F8h]
  __int64 v24; // [rsp+70h] [rbp-1E8h]
  __int64 v25; // [rsp+78h] [rbp-1E0h]
  __int64 v26; // [rsp+88h] [rbp-1D0h]
  __int64 v27; // [rsp+90h] [rbp-1C8h]
  char v28[8]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-1B0h]
  __int64 v30; // [rsp+B0h] [rbp-1A8h]
  char v31[8]; // [rsp+C8h] [rbp-190h] BYREF
  char v32[24]; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-170h]
  __int64 v34; // [rsp+F0h] [rbp-168h]
  void *ptr; // [rsp+110h] [rbp-148h]
  char v36[24]; // [rsp+130h] [rbp-128h] BYREF
  __int64 v37; // [rsp+148h] [rbp-110h]
  __int64 v38; // [rsp+150h] [rbp-108h]
  __int64 v39; // [rsp+160h] [rbp-F8h]
  __int64 v40; // [rsp+168h] [rbp-F0h]
  char v41[80]; // [rsp+178h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+1C8h] [rbp-90h]
  __int64 v43; // [rsp+1D0h] [rbp-88h]
  __int64 v44; // [rsp+1E0h] [rbp-78h]
  __int64 v45; // [rsp+1E8h] [rbp-70h]
  __int64 v46; // [rsp+200h] [rbp-58h]
  __int64 v47; // [rsp+208h] [rbp-50h]
  unsigned __int64 v48; // [rsp+218h] [rbp-40h]

  v4 = *a2;
  v48 = __readfsqword(0x28u);
  v6 = &v20[(_QWORD)a2[1]];
  if ( ((unsigned __int8)v4 & 1) != 0 )
    v4 = *(char **)&v4[*v6 - 1];
  v19 = a2 + 4;
  if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64, __int64))v4)(v6, a1, 1) )
  {
    do
    {
      if ( !a2[6] )
        std::__throw_bad_function_call();
      v7 = (const char *)((__int64 (__fastcall *)(char **, _BYTE *))a2[7])(v19, v20);
      v8 = **(unsigned __int8 **)(a3 + 24);
      v9 = **(_BYTE **)(a3 + 16);
      if ( !**(_BYTE **)(a3 + 8) && (unsigned __int8)sub_3EE050(**(_QWORD **)a3, (__int64)v7) )
        goto LABEL_40;
      sub_40E9B0(v21, v7);
      if ( !v9 && (unsigned __int8)sub_40B7D0(v21) )
        goto LABEL_46;
      if ( (_BYTE)v8 )
        goto LABEL_9;
      if ( (unsigned __int8)sub_40B7E0(v21) )
LABEL_46:
        v8 = 0;
      else
        v8 = sub_40B7F0(v21) ^ 1;
LABEL_9:
      if ( v46 )
      {
        v47 = 0;
        qfree(v46, v7);
      }
      if ( v44 )
      {
        v45 = 0;
        qfree(v44, v7);
      }
      if ( v42 )
      {
        v43 = 0;
        qfree(v42, v7);
      }
      clear_tinfo_t(v41);
      if ( v39 )
      {
        v40 = 0;
        qfree(v39, v7);
      }
      if ( v37 )
      {
        v38 = 0;
        qfree(v37, v7);
      }
      clear_tinfo_t(v36);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v33 )
      {
        v34 = 0;
        qfree(v33, v7);
      }
      cleanup_argloc(v32);
      clear_tinfo_t(v31);
      v10 = v29;
      if ( v29 )
      {
        v11 = v30;
        if ( v30 )
        {
          v12 = 0;
          do
          {
            v13 = (_QWORD *)(v10 + 80 * v12);
            clear_tinfo_t(v13 + 8);
            v14 = v13[5];
            if ( v14 )
            {
              v13[6] = 0;
              qfree(v14, v7);
            }
            v15 = v13[2];
            if ( v15 )
            {
              v13[3] = 0;
              qfree(v15, v7);
            }
            ++v12;
            cleanup_argloc(v13);
            v10 = v29;
          }
          while ( v11 != v12 );
        }
        v30 = 0;
        qfree(v10, v7);
      }
      clear_tinfo_t(v28);
      if ( v26 )
      {
        v27 = 0;
        qfree(v26, v7);
      }
      if ( v24 )
      {
        v25 = 0;
        qfree(v24, v7);
      }
      if ( v22 )
      {
        v23 = 0;
        qfree(v22, v7);
      }
      if ( (_BYTE)v8 )
        return v8;
LABEL_40:
      v16 = a2[2];
      v17 = &v20[(_QWORD)a2[3]];
      if ( ((unsigned __int8)v16 & 1) != 0 )
        v16 = *(char **)&v16[*v17 - 1];
    }
    while ( ((unsigned __int8 (__fastcall *)(_QWORD *, const char *))v16)(v17, v7) );
  }
  return 0;
}
