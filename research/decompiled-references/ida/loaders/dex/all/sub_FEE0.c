unsigned __int64 __fastcall sub_FEE0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int16 *v12; // rbx
  _DWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // r8d
  __int64 v16; // rdx
  int *v17; // rdx
  unsigned __int16 v18; // si
  int v19; // eax
  __int64 v20; // rax
  const char *v21; // rax
  size_t v22; // r14
  _QWORD *v23; // rdi
  __int64 v24; // r13
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  _BYTE *v27; // rax
  const char *v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  struct _Unwind_Exception *v36; // rbx
  __int64 v37; // [rsp+0h] [rbp-178h]
  void **v38; // [rsp+8h] [rbp-170h]
  __int64 v39; // [rsp+10h] [rbp-168h]
  size_t v40; // [rsp+18h] [rbp-160h]
  const char *src; // [rsp+20h] [rbp-158h]
  unsigned int v42; // [rsp+2Ch] [rbp-14Ch]
  void *v43; // [rsp+30h] [rbp-148h] BYREF
  __int128 v44; // [rsp+38h] [rbp-140h]
  void *v45; // [rsp+50h] [rbp-128h] BYREF
  __int128 v46; // [rsp+58h] [rbp-120h]
  _QWORD v47[25]; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v48; // [rsp+138h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 16);
  v48 = __readfsqword(0x28u);
  v37 = v6;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  v42 = v7;
  v39 = v7;
  if ( v7 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( __ROR4__(989560465 * v9, 3) <= 0xD1B71u )
      {
        v10 = (unsigned int)(v9 + 5000);
        a2 = (unsigned __int64)"methods";
        if ( (unsigned int)v10 > v42 )
          v10 = v42;
        sub_7210((__int64)"Processing %s %5u..%-5u from %5u%s", "methods", (unsigned int)(v9 + 1), v10, v42, "", v37);
      }
      if ( __ROR4__(652835029 * v9, 2) <= 0x83126Eu
        && (unsigned __int8)callui(27, a2, &callui, a4, a5, a6, v37, v38, v39, v40) )
      {
        sub_7600();
      }
      v11 = sub_1C070(a1, (unsigned int)v9);
      v12 = (unsigned __int16 *)v11;
      if ( !v11 )
      {
        a2 = (unsigned int)v9;
        sub_5860((__int64)"dex: failed to read method id %u\n", v9);
        goto LABEL_32;
      }
      v13 = (_DWORD *)sub_1C0F0(a1, *(unsigned __int16 *)(v11 + 2));
      if ( !v13 )
        break;
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(_DWORD *)(v14 + 92);
      memset(v47, 0, sizeof(v47));
      HIDWORD(v47[2]) = v9;
      v47[1] = *(_QWORD *)(a1 + 152) + (unsigned int)(v15 + 8 * v9);
      LODWORD(v47[2]) = *v12;
      LODWORD(v47[3]) = v13[1];
      HIDWORD(v47[3]) = *v13;
      v16 = (unsigned int)v13[2];
      if ( (_DWORD)v16 )
      {
        if ( (unsigned int)(v16 + 4) >= *(_DWORD *)(v14 + 32) )
          break;
        v17 = (int *)(*(_QWORD *)(a1 + 32) + v16);
        v18 = 32;
        v19 = *v17;
        LOWORD(v47[4]) = *v17;
        if ( (unsigned __int16)v19 <= 0x20u )
          v18 = v19;
        if ( (_WORD)v19 )
        {
          v20 = 0;
          do
          {
            *((_DWORD *)&v47[4] + v20 + 1) = *((unsigned __int16 *)v17 + v20 + 2);
            ++v20;
          }
          while ( v18 > (int)v20 );
        }
      }
      netnode_supset(v37, v9, v47, 200, 77);
      v21 = (const char *)sub_1BF80(a1, *((unsigned int *)v12 + 1));
      if ( v21 )
      {
        src = v21;
        v43 = nullptr;
        v44 = 0;
        v22 = strlen(v21);
        v40 = v22 + 1;
        v38 = &v43;
        v43 = (void *)qvector_reserve(&v43, 0, v22 + 1, 1);
        *(_QWORD *)&v44 = v22 + 1;
        memmove(v43, src, v22);
        *((_BYTE *)v43 + v22) = 0;
        sub_8AD0(v37, v9, (__int64)&v43, 0x4Eu);
        sub_8AD0(v37, v9, (__int64)&v43, 0x4Fu);
        v23 = *(_QWORD **)(a1 + 8);
        v46 = 0;
        v45 = nullptr;
        sub_96C0(v23, (__int64)&v45, (__int64)v47);
        v24 = v46;
        if ( (unsigned __int64)v46 <= 1 )
        {
          sub_E410((__int64 *)&v45, (__int64)"_def_%a", 0.0);
        }
        else
        {
          v25 = v45;
          v26 = v46 + 5;
          if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 5) )
          {
            v38 = (void **)(v46 + 5);
            v45 = (void *)qvector_reserve(&v45, v45, v26, 1);
            v26 = v24 + 5;
            v25 = v45;
          }
          *(_QWORD *)&v46 = v26;
          v25[v24 + 4] = 0;
          memmove((char *)v45 + 5, v45, v24 - 1);
          v27 = v45;
          *(_DWORD *)v45 = 1717920863;
          v27[4] = 95;
        }
        v28 = s1;
        if ( (_QWORD)v46 )
          v28 = (const char *)v45;
        set_name(v47[1], v28, 7168);
        v29 = *(_QWORD *)(a1 + 8);
        v30 = (unsigned int)(*(_DWORD *)a1 - 1);
        if ( v30 >= *(_QWORD *)(v29 + 56) )
        {
          if ( under_debugger )
            BUG();
          interr(20112);
LABEL_42:
          v36 = (struct _Unwind_Exception *)sub_59F0();
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45);
          }
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(v43);
          }
          _Unwind_Resume(v36);
        }
        v31 = netnode_altval(*(_QWORD *)(*(_QWORD *)(v29 + 48) + 8 * v30), *((unsigned int *)v12 + 1), 595);
        add_dref(v47[1], v31, 5);
        a2 = LODWORD(v47[2]);
        v32 = netnode_altval(v37, LODWORD(v47[2]), 84);
        if ( v32 )
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = (unsigned int)(*(_DWORD *)a1 - 1);
          if ( v35 >= *(_QWORD *)(v34 + 56) )
            goto LABEL_42;
          a2 = netnode_altval(*(_QWORD *)(*(_QWORD *)(v34 + 48) + 8 * v35), (unsigned int)v32, 595);
          add_dref(v47[1], a2, 5);
        }
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v45);
        }
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree(v43);
        }
      }
      else
      {
        a2 = *((unsigned int *)v12 + 1);
        sub_5860((__int64)"dex: failed to read method name %u\n", a2);
      }
LABEL_32:
      if ( v39 == ++v9 )
        return v48 - __readfsqword(0x28u);
    }
    a2 = v12[1];
    sub_5860((__int64)"dex: failed to read prototype id %u\n", a2);
    goto LABEL_32;
  }
  return v48 - __readfsqword(0x28u);
}

