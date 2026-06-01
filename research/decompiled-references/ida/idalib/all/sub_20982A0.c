void __fastcall sub_20982A0(__int64 *a1, _BYTE *a2, size_t a3)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r15
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  size_t v18; // rax
  __int64 v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  __int64 v23; // rbx
  size_t v24; // rax
  size_t v25; // rax
  __int64 v26; // rbx
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rbx
  void *v34; // rdi
  unsigned int v35; // [rsp+0h] [rbp-3A8h]
  __int64 v36; // [rsp+0h] [rbp-3A8h]
  unsigned int v37; // [rsp+8h] [rbp-3A0h]
  __int64 v38; // [rsp+8h] [rbp-3A0h]
  unsigned int v39; // [rsp+14h] [rbp-394h]
  __int64 v40; // [rsp+18h] [rbp-390h]
  __int64 v41; // [rsp+18h] [rbp-390h]
  __int64 v42; // [rsp+18h] [rbp-390h]
  _BYTE *v43; // [rsp+20h] [rbp-388h]
  _BYTE v44[80]; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v45[80]; // [rsp+80h] [rbp-328h] BYREF
  _QWORD v46[10]; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD v47[10]; // [rsp+120h] [rbp-288h] BYREF
  __m128i v48[5]; // [rsp+170h] [rbp-238h] BYREF
  __int64 *v49[10]; // [rsp+1C0h] [rbp-1E8h] BYREF
  __int64 v50; // [rsp+210h] [rbp-198h]
  unsigned int v51; // [rsp+218h] [rbp-190h]
  __int64 v52; // [rsp+220h] [rbp-188h] BYREF

  v4 = *a1;
  v5 = sub_2244B30(a2, a3);
  v6 = (unsigned int)sub_2244CB0(v4, a2, a3, v5);
  v9 = (__int64 *)(*(_QWORD *)v4 + 8 * v6);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_2098140(v49, v9, 0);
      v10 = v49[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(v4 + 16);
  }
  v35 = v6;
  v11 = sub_22300B0(a3 + 17, 8, v6, v6, v7, v8);
  v12 = v35;
  v13 = (_QWORD *)v11;
  if ( a3 )
  {
    memcpy((void *)(v11 + 16), a2, a3);
    v12 = v35;
  }
  *((_BYTE *)v13 + a3 + 16) = 0;
  *v13 = a3;
  v13[1] = 0;
  *v9 = (__int64)v13;
  ++*(_DWORD *)(v4 + 12);
  v14 = sub_22450D0(v4, v12);
  sub_2098140(v49, (__int64 *)(*(_QWORD *)v4 + 8LL * v14), 0);
  v10 = v49[0];
LABEL_8:
  v15 = *v10;
  v16 = *(unsigned int *)(*v10 + 8);
  v39 = *(_DWORD *)(v15 + 12);
  v37 = v16;
  v36 = v39 - v16;
  if ( v39 != v16 )
  {
    v17 = a1[2];
    v48[0] = 0u;
    v40 = v17;
    v18 = j__strlen("FunctionIRSizeChange");
    sub_208C700((__int64)v49, (__int64)"size-info", (__int64)"FunctionIRSizeChange", v18, v48, v40);
    v19 = a1[3];
    v43 = *(_BYTE **)v19;
    v41 = *(_QWORD *)(v19 + 8);
    v20 = j__strlen("Pass");
    sub_208C1E0((__int64)v44, "Pass", v20, v43, v41);
    v42 = sub_20955A0((__int64)v49, (__int64)v44);
    v21 = j__strlen(": Function: ");
    sub_208CA70(v42, ": Function: ", v21);
    v22 = j__strlen("Function");
    sub_208C1E0((__int64)v45, "Function", v22, a2, a3);
    v23 = sub_20955A0(v42, (__int64)v45);
    v24 = j__strlen(": IR instruction count changed from ");
    sub_208CA70(v23, ": IR instruction count changed from ", v24);
    v25 = j__strlen("IRInstrsBefore");
    sub_208C560(v46, "IRInstrsBefore", v25, v37);
    v26 = sub_20955A0(v23, (__int64)v46);
    v27 = j__strlen(" to ");
    sub_208CA70(v26, " to ", v27);
    v28 = j__strlen("IRInstrsAfter");
    sub_208C560(v47, "IRInstrsAfter", v28, v39);
    v38 = sub_20955A0(v26, (__int64)v47);
    v29 = j__strlen("; Delta: ");
    sub_208CA70(v38, "; Delta: ", v29);
    v30 = j__strlen("DeltaInstrCount");
    sub_208C2D0(v48, "DeltaInstrCount", v30, v36);
    sub_20955A0(v38, (__int64)v48);
    sub_2095460((__int64)v48);
    sub_2095460((__int64)v47);
    sub_2095460((__int64)v46);
    sub_2095460((__int64)v45);
    sub_2095460((__int64)v44);
    v31 = (_QWORD *)sub_208D410(*(_QWORD *)a1[1]);
    sub_2091720(v31, v49);
    v32 = v50;
    *(_DWORD *)(v15 + 8) = v39;
    v49[0] = (__int64 *)&off_2C721A0;
    v33 = v32 + 80LL * v51;
    if ( v32 != v33 )
    {
      do
      {
        while ( 1 )
        {
          v33 -= 80;
          v34 = *(void **)(v33 + 32);
          if ( v34 != (void *)(v33 + 48) )
            operator delete(v34);
          if ( *(_QWORD *)v33 == v33 + 16 )
            break;
          operator delete(*(void **)v33);
          if ( v32 == v33 )
            goto LABEL_15;
        }
      }
      while ( v32 != v33 );
LABEL_15:
      v33 = v50;
    }
    if ( (__int64 *)v33 != &v52 )
      free((void *)v33);
  }
}
