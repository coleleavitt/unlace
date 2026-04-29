__int64 __fastcall sub_268930(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 module_data; // r12
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rax
  int v25; // eax
  int v26; // edx
  int v27; // r13d
  unsigned __int64 v28; // rax
  int v29; // r13d
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r14
  int v36; // edx
  __int64 v37; // r13
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // rdi
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int8 v45; // [rsp+18h] [rbp-70h]
  unsigned int v46; // [rsp+18h] [rbp-70h]
  unsigned int v47; // [rsp+18h] [rbp-70h]
  unsigned int v48; // [rsp+18h] [rbp-70h]
  char v49; // [rsp+1Ch] [rbp-6Ch]
  __int64 v50; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-58h] BYREF
  int v52; // [rsp+38h] [rbp-50h]
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  while ( 2 )
  {
    v8 = a3[5];
    if ( v8 )
      module_data = *(_QWORD *)(v8 + 216);
    else
      module_data = get_module_data((unsigned int)dword_4EB8F8);
    if ( *(_DWORD *)(a1 + 12) != -1 )
      sub_2651E0(a1, module_data, a3);
    if ( *(_DWORD *)(a1 + 8) != 71 )
    {
      if ( (a2 & 0x80000000) != 0 )
      {
LABEL_10:
        v45 = 0;
        goto LABEL_11;
      }
LABEL_8:
      sub_263480((_QWORD *)a1, (__int64)a3, a2, 1u);
LABEL_9:
      sub_265AA0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
      goto LABEL_10;
    }
    v45 = a4 == 2;
    if ( !a4 )
      v45 = sub_261600(*(_QWORD *)(a1 + 24), module_data);
    v13 = a3[5];
    if ( v13 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)a1;
        v15 = *(_DWORD *)(a1 + 8);
      }
      else
      {
        v14 = -1;
        v15 = 0;
      }
      v51 = v14;
      v52 = v15;
      v49 = sub_258260(v13, &v51);
      if ( (get_merge_state(v13, &v51, v16, v17) & 3) == 0 && (v49 & 1) != 0 )
      {
        if ( (a2 & 0x80000000) != 0 )
          goto LABEL_10;
        if ( *(_DWORD *)(a1 + 8) == 71 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
    if ( (a2 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)(a1 + 8) != 71 )
        sub_263480((_QWORD *)a1, (__int64)a3, a2, 1u);
      if ( !v45 )
        goto LABEL_9;
    }
LABEL_11:
    v10 = sub_269820(a1, module_data, a2, a3);
    v11 = v10;
    if ( !v10 )
    {
      switch ( *(_DWORD *)(a1 + 8) )
      {
        case 'F':
          sub_262B00((void **)a1, module_data, 0, a2, byte_413269, a3, 0x45u);
          return v53 - __readfsqword(0x28u);
        case 'G':
          return sub_269B10(*(_QWORD *)(a1 + 24), a1, a2, a3, v45);
        case 'H':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_412793);
          v20 = *(_QWORD *)(a1 + 24);
          v21 = (__int64)a3;
          v19 = a2;
          goto LABEL_41;
        case 'I':
          if ( (a2 & 0x80000000) != 0 )
          {
            v42 = 10 - a2;
            a2 = -a2;
            v46 = v42;
          }
          else
          {
            v11 = a2;
            v46 = a2 + 5;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, const char *))*a3)(a3, v11, &byte_427548);
          v22 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, v46, (__int64)a3, 0, 0);
          sub_262B00((void **)a1, module_data, v22, 1u, byte_413198, a3, 0x48u);
          sub_268930(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, a4);
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          if ( !v23 )
            return v53 - __readfsqword(0x28u);
          if ( *(_DWORD *)(v23 + 8) == 71
            && (v24 = *(__int64 **)(v23 + 24), v24[2] == 1)
            && (v43 = *v24, *(_QWORD *)(v43 + 24) == -4294967223LL) )
          {
            a1 = v43 + 16;
            if ( *(_BYTE *)(module_data + 719) )
              sub_262B00((void **)(v43 + 16), module_data, 0, 0, (char *)&unk_412793, a3, 0);
            sub_263480((_QWORD *)a1, (__int64)a3, a2, 1u);
            sub_265AA0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
            v44 = a2;
            a2 = -a2;
            (*(void (__fastcall **)(_QWORD *, __int64, void *))*a3)(a3, v44, &unk_413233);
          }
          else
          {
            sub_262B00((void **)a1, module_data, 0, a2, (char *)&byte_427538, a3, 0x43u);
            a2 += *(_DWORD *)(module_data + 592);
            a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
          }
          continue;
        case 'J':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41323D);
          v47 = a2 + 6;
          v25 = sub_267BD0(*(_QWORD *)(a1 + 24) + 72LL, module_data, a2 + 6, (__int64)a3, 0, 0);
          v26 = *(_DWORD *)(module_data + 600);
          v27 = v25;
          if ( v26 <= v25
            || (unsigned __int8)sub_2681A0(*(_QWORD *)(a1 + 24), module_data, v26 - v25, a3[5], &v50)
            || (v28 = *(int *)(module_data + 600), v50 + v27 >= v28)
            || (unsigned __int8)sub_2681A0(
                                  *(_QWORD *)(a1 + 24) + 136LL,
                                  module_data,
                                  (int)v28 - v27 - v50,
                                  a3[5],
                                  nullptr) )
          {
            sub_262B00((void **)(*(_QWORD *)(a1 + 24) + 72LL), module_data, v27, 0, byte_413269, a3, 0x45u);
            sub_263480(*(_QWORD **)(a1 + 24), (__int64)a3, v47, 1u);
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v47, &unk_412793);
            v41 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, v47, (__int64)a3, 0, 0);
            sub_262B00(*(void ***)(a1 + 24), module_data, v41, 0, byte_413269, a3, 0x45u);
            sub_263480((_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL), (__int64)a3, v47, 1u);
            a4 = 2;
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, v47, &unk_412793);
            v31 = sub_267BD0(*(_QWORD *)(a1 + 24) + 136LL, module_data, v47, (__int64)a3, 0, 0);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_41324C);
            v29 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, v27 + 2, (__int64)a3, 0, 0);
            (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_41324C);
            v30 = v29 + 2;
            a4 = 0;
            v31 = sub_267BD0(*(_QWORD *)(a1 + 24) + 136LL, module_data, v30, (__int64)a3, 0, 0);
          }
          sub_262B00((void **)a1, module_data, v31, 1u, byte_413198, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'K':
          a4 = 0;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_413253);
          v32 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0);
          sub_262B00((void **)a1, module_data, v32, 1u, byte_413198, a3, 0x48u);
          a2 += *(_DWORD *)(module_data + 592);
          a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
          continue;
        case 'L':
          sub_262B00((void **)a1, module_data, 0, a2, byte_427531, a3, 0x44u);
          sub_268930(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), a2 + *(_DWORD *)(module_data + 592), a3, 0);
          sub_265AA0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a3, a1);
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_413253);
          v33 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, a2 + 8, (__int64)a3, 0, 0);
          sub_262B00((void **)a1, module_data, v33, 1u, byte_413264, a3, 0x45u);
          return v53 - __readfsqword(0x28u);
        case 'M':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41326F);
          v34 = sub_267BD0(*(_QWORD *)(a1 + 24), module_data, a2 + 9, (__int64)a3, 0, 0);
          sub_262B00((void **)a1, module_data, v34, 1u, byte_413198, a3, 0x48u);
          sub_262B00((void **)a1, module_data, 0, a2, byte_427568, a3, 0x46u);
          v35 = *(_QWORD *)(a1 + 24);
          v36 = *(_DWORD *)(module_data + 592);
          v37 = *(_QWORD *)(v35 + 112);
          v48 = v36 + a2;
          if ( 56LL * *(_QWORD *)(v35 + 120) )
          {
            v38 = *(_QWORD *)(v35 + 112);
            do
            {
              v39 = v38 == v37;
              v40 = v37;
              v37 += 56;
              sub_2694F0(v40, module_data, a1, v48, a3, *(_BYTE *)(module_data + 719) & !v39);
              v38 = *(_QWORD *)(v35 + 112);
            }
            while ( v37 != v38 + 56LL * *(_QWORD *)(v35 + 120) );
            v36 = *(_DWORD *)(module_data + 592);
          }
          sub_263480((_QWORD *)a1, (__int64)a3, a2 + 2 * v36, 0);
          sub_262B00((void **)a1, module_data, 0, a2, byte_427560, a3, 0x47u);
          return v53 - __readfsqword(0x28u);
        case 'N':
          sub_262B00((void **)a1, module_data, 0, a2, byte_413296, a3, 0x45u);
          return v53 - __readfsqword(0x28u);
        case 'O':
          sub_262B00((void **)a1, module_data, 0, a2, byte_4132A5, a3, 0x45u);
          return v53 - __readfsqword(0x28u);
        case 'P':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_413281);
          v18 = a2 + 6;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_413229);
          v19 = a2 + 7;
          break;
        case 'Q':
          return sub_265330(*(signed int **)(a1 + 24), (void **)a1, a2, a3);
        case 'R':
          return sub_2656E0(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'S':
          return sub_268840(*(_QWORD *)(a1 + 24), (void **)a1, a2, a3);
        case 'T':
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, a2, &unk_41328C);
          v18 = a2 + 5;
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
            goto LABEL_42;
          (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a3)(a3, 0, &unk_413229);
          v19 = a2 + 6;
          break;
        default:
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, const char *))*a3)(a3, a2, "???");
      }
      v20 = *(_QWORD *)(a1 + 24);
      v21 = (__int64)a3;
LABEL_41:
      v18 = sub_267BD0(v20, module_data, v19, v21, 0, 0);
LABEL_42:
      sub_262B00((void **)a1, module_data, v18, 0, byte_413269, a3, 0x45u);
    }
    return v53 - __readfsqword(0x28u);
  }
}
