/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000022E0
// Address: 0x00000001000022E0

//----- (00000001000022E0) ----------------------------------------------------
char __fastcall sub_1000022E0(__int64 a1)
{
  char v1; // al
  kern_return_t v3; // eax
  int v5; // ecx
  signed int v6; // r13d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r15
  _QWORD *v17; // r12
  signed int v18; // eax
  _DWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 *v22; // r15
  __int128 *v23; // r14
  signed int v24; // eax
  _DWORD *v25; // rax
  _QWORD *v26; // r12
  int v27; // r14d
  __int64 v28; // rcx
  __int128 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  bool v45; // zf
  void *v46; // rdi
  unsigned int v47; // edi
  __int64 v48; // [rsp+8h] [rbp-1158h]
  int v49; // [rsp+14h] [rbp-114Ch]
  char v50; // [rsp+18h] [rbp-1148h]
  _QWORD *v51; // [rsp+20h] [rbp-1140h]
  __int128 *v52; // [rsp+28h] [rbp-1138h] BYREF
  __int128 v53; // [rsp+30h] [rbp-1130h] BYREF
  mach_msg_type_number_t act_listCnt; // [rsp+44h] [rbp-111Ch] BYREF
  thread_act_array_t act_list; // [rsp+48h] [rbp-1118h] BYREF
  _DWORD __src[517]; // [rsp+50h] [rbp-1110h] BYREF
  __int64 v57; // [rsp+868h] [rbp-8F8h]
  int v58; // [rsp+870h] [rbp-8F0h]
  void *v59; // [rsp+878h] [rbp-8E8h]
  __int128 v60; // [rsp+880h] [rbp-8E0h]
  char v61; // [rsp+890h] [rbp-8D0h]
  __int64 v62; // [rsp+898h] [rbp-8C8h] BYREF
  _QWORD __dst[260]; // [rsp+8A0h] [rbp-8C0h] BYREF
  int v64; // [rsp+10C0h] [rbp-A0h]
  __int128 v65; // [rsp+10C8h] [rbp-98h]
  __int64 v66; // [rsp+10D8h] [rbp-88h]
  char v67; // [rsp+10E0h] [rbp-80h]
  __int64 v68; // [rsp+10E8h] [rbp-78h] BYREF
  __int64 v69; // [rsp+10F0h] [rbp-70h]
  char v70; // [rsp+10F8h] [rbp-68h]
  __int128 v71; // [rsp+10FCh] [rbp-64h]
  __int128 v72; // [rsp+110Ch] [rbp-54h]
  __int128 v73; // [rsp+111Ch] [rbp-44h]
  int v74; // [rsp+112Ch] [rbp-34h]

  if ( !*(_BYTE *)(a1 + 1234) )
  {
    v3 = task_threads(*(_DWORD *)(a1 + 848), &act_list, &act_listCnt);
    v53 = 0;
    v52 = &v53;
    if ( v3 )
    {
      v50 = 0;
LABEL_5:
      sub_10000C9A0((__int64)&v52, (_QWORD *)v53);
      v1 = v50;
      return v1 & 1;
    }
    if ( !act_listCnt )
    {
      v47 = 30089;
      goto LABEL_98;
    }
    v51 = (_QWORD *)(a1 + 1216);
    v48 = a1 + 120;
    v50 = 0;
    v5 = 0;
    while ( 1 )
    {
      v49 = v5;
      v6 = act_list[v5];
      v7 = *v51;
      if ( !*v51 )
        goto LABEL_18;
      v8 = v51;
      do
      {
        if ( *(_DWORD *)(v7 + 32) >= v6 )
          v8 = (_QWORD *)v7;
        v7 = *(_QWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 32) < v6));
      }
      while ( v7 );
      if ( v8 == v51 || v6 < *((_DWORD *)v8 + 8) )
      {
LABEL_18:
        v68 = 0xFFFFFFFFLL;
        v69 = -1;
        v70 = 0;
        v73 = 0;
        v72 = 0;
        v71 = 0;
        v74 = 0;
        set_debug_event_code((__int64)&v68, 3);
        if ( ((unsigned int)v71 & 0xFFFFFFF) - 9 >= 2 && (v71 & 0xFFFFFFF) != 3 )
        {
          if ( under_debugger != 1 )
            interr(0xCE1u);
          goto LABEL_100;
        }
        LODWORD(v68) = *(_DWORD *)(a1 + 528);
        HIDWORD(v68) = v6;
        v69 = -1;
        v70 = 1;
        v9 = *(_QWORD *)(a1 + 152);
        if ( !v9 )
        {
          sub_10000A5A0(v48);
          v9 = *(_QWORD *)(a1 + 152);
        }
        v10 = *(_QWORD *)(a1 + 128);
        v11 = v9 / 0x38;
        v12 = *(_QWORD *)(v10 + 8 * (v9 / 0x38));
        v13 = v12 + 72 * (v9 % 0x38);
        v14 = 0;
        if ( *(_QWORD *)(a1 + 136) != v10 )
          v14 = v13;
        if ( v14 == v12 )
          v14 = *(_QWORD *)(v10 + 8 * v11 - 8) + 4032LL;
        *(_QWORD *)(v14 - 72) = 0xFFFFFFFFLL;
        *(_QWORD *)(v14 - 64) = -1;
        *(_BYTE *)(v14 - 56) = 0;
        *(_DWORD *)(v14 - 52) = 0;
        ((void (__fastcall *)(__int64, __int64 *))copy_debug_event)(v14 - 72, &v68);
        *(__m128i *)(a1 + 152) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_10008FE10);
        __src[0] = v6;
        __src[1] = v6;
        __src[4] = 0;
        v57 = 0;
        v58 = 0;
        *(_DWORD *)((char *)&__src[2] + 3) = 0;
        __src[2] = 0;
        v61 = 0;
        LODWORD(v62) = v6;
        memcpy(__dst, __src, 0x814u);
        __dst[259] = 0;
        v64 = 0;
        v65 = 0;
        v59 = nullptr;
        v60 = 0;
        v66 = 0;
        v67 = 0;
        v15 = *(_QWORD *)(a1 + 1216);
        v16 = v51;
LABEL_28:
        v17 = v16;
        if ( v15 )
        {
          do
          {
            v16 = (_QWORD *)v15;
            v18 = *(_DWORD *)(v15 + 32);
            if ( v6 < v18 )
            {
              v15 = *v16;
              goto LABEL_28;
            }
            if ( v6 <= v18 )
              goto LABEL_37;
            v15 = v16[1];
          }
          while ( v15 );
          v17 = v16 + 1;
        }
        v19 = operator new(0x870u);
        v19[8] = v6;
        memcpy(v19 + 10, __src, 0x814u);
        *((_QWORD *)v19 + 264) = v57;
        v19[530] = v58;
        *((_QWORD *)v19 + 266) = 0;
        *(_QWORD *)&v65 = 0;
        *((_QWORD *)v19 + 267) = 0;
        *((_QWORD *)&v65 + 1) = 0;
        *((_QWORD *)v19 + 268) = 0;
        v66 = 0;
        *((_BYTE *)v19 + 2152) = 0;
        *(_OWORD *)v19 = 0;
        *((_QWORD *)v19 + 2) = v16;
        *v17 = v19;
        v20 = **(_QWORD **)(a1 + 1208);
        if ( v20 )
        {
          *(_QWORD *)(a1 + 1208) = v20;
          v19 = (_DWORD *)*v17;
        }
        sub_10000C830(*(__int64 **)(a1 + 1216), (__int64 *)v19);
        ++*(_QWORD *)(a1 + 1224);
        if ( (_QWORD)v65 )
        {
          *((_QWORD *)&v65 + 1) = 0;
          qfree((void *)v65);
          *(_QWORD *)&v65 = 0;
          v66 = 0;
        }
LABEL_37:
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 688LL))(a1, (unsigned int)v6);
        free_debug_event((__int64)&v68);
        v50 = 1;
      }
      v21 = v53;
      v22 = &v53;
      v23 = &v53;
LABEL_42:
      if ( v21 )
      {
        do
        {
          v23 = (__int128 *)v21;
          v24 = *(_DWORD *)(v21 + 28);
          if ( v6 < v24 )
          {
            v21 = *(_QWORD *)v23;
            v22 = v23;
            goto LABEL_42;
          }
          if ( v6 <= v24 )
            goto LABEL_10;
          v21 = *((_QWORD *)v23 + 1);
        }
        while ( v21 );
        v22 = (__int128 *)((char *)v23 + 8);
      }
      v25 = operator new(0x20u);
      v25[7] = v6;
      *(_OWORD *)v25 = 0;
      *((_QWORD *)v25 + 2) = v23;
      *(_QWORD *)v22 = v25;
      if ( *(_QWORD *)v52 )
      {
        v52 = *(__int128 **)v52;
        v25 = *(_DWORD **)v22;
      }
      sub_10000C830((__int64 *)v53, (__int64 *)v25);
      ++*((_QWORD *)&v53 + 1);
LABEL_10:
      v5 = v49 + 1;
      if ( v49 + 1 >= act_listCnt )
      {
        if ( !mach_vm_deallocate(mach_task_self_, (mach_vm_address_t)act_list, 4LL * act_listCnt) )
        {
          v26 = *(_QWORD **)(a1 + 1208);
          if ( v26 == v51 )
            goto LABEL_5;
LABEL_54:
          v27 = *((_DWORD *)v26 + 8);
          v28 = v53;
          if ( (_QWORD)v53 )
          {
            v29 = &v53;
            do
            {
              if ( *(_DWORD *)(v28 + 28) >= v27 )
                v29 = (__int128 *)v28;
              v28 = *(_QWORD *)(v28 + 8LL * (*(_DWORD *)(v28 + 28) < v27));
            }
            while ( v28 );
            if ( v29 != &v53 && v27 >= *((_DWORD *)v29 + 7) )
            {
LABEL_73:
              v36 = (_QWORD *)v26[1];
              if ( v36 )
              {
                do
                {
                  v37 = v36;
                  v36 = (_QWORD *)*v36;
                }
                while ( v36 );
              }
              else
              {
                do
                {
                  v38 = v26;
                  v26 = (_QWORD *)v26[2];
                }
                while ( (_QWORD *)*v26 != v38 );
                v37 = v26;
              }
              goto LABEL_53;
            }
          }
          v30 = *(_QWORD *)(a1 + 128);
          v31 = *(_QWORD *)(a1 + 152);
          v32 = *(_QWORD *)(a1 + 136);
          v33 = (_QWORD *)(v30 + 8 * (v31 / 0x38));
          if ( v32 == v30 )
            v34 = 0;
          else
            v34 = *v33 + 72 * (v31 % 0x38);
LABEL_65:
          v35 = v34 - 4032;
          while ( 1 )
          {
            if ( v32 == v30 )
            {
              if ( !v34 )
              {
LABEL_78:
                v62 = 0xFFFFFFFFLL;
                __dst[0] = -1;
                LOBYTE(__dst[1]) = 0;
                *(_OWORD *)((char *)&__dst[5] + 4) = 0;
                *(_OWORD *)((char *)&__dst[3] + 4) = 0;
                *(_OWORD *)((char *)&__dst[1] + 4) = 0;
                HIDWORD(__dst[7]) = 0;
                set_debug_event_code((__int64)&v62, 4);
                if ( (HIDWORD(__dst[1]) & 0xFFFFFFF) != 2 && (HIDWORD(__dst[1]) & 0xFFFFFFF) != 4 )
                {
                  if ( under_debugger != 1 )
                    interr(0xCE0u);
                  goto LABEL_100;
                }
                LODWORD(__dst[2]) = 0;
                LODWORD(v62) = *(_DWORD *)(a1 + 528);
                HIDWORD(v62) = v27;
                __dst[0] = -1;
                LOBYTE(__dst[1]) = 1;
                v39 = *(_QWORD *)(a1 + 128);
                v40 = 0;
                if ( *(_QWORD *)(a1 + 136) != v39 )
                  v40 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v39) >> 3) - 1;
                v41 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
                if ( v40 == v41 )
                {
                  sub_10000AF80(v48);
                  v39 = *(_QWORD *)(a1 + 128);
                  v41 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
                }
                v42 = *(_QWORD *)(v39 + 8 * (v41 / 0x38)) + 72 * (v41 % 0x38);
                *(_QWORD *)v42 = 0xFFFFFFFFLL;
                *(_QWORD *)(v42 + 8) = -1;
                *(_BYTE *)(v42 + 16) = 0;
                *(_DWORD *)(v42 + 20) = 0;
                ((void (__fastcall *)(unsigned __int64, __int64 *))copy_debug_event)(v42, &v62);
                ++*(_QWORD *)(a1 + 160);
                v43 = (_QWORD *)v26[1];
                v44 = v26;
                if ( v43 )
                {
                  do
                  {
                    v37 = v43;
                    v43 = (_QWORD *)*v43;
                  }
                  while ( v43 );
                }
                else
                {
                  do
                  {
                    v37 = (_QWORD *)v44[2];
                    v45 = *v37 == (_QWORD)v44;
                    v44 = v37;
                  }
                  while ( !v45 );
                }
                if ( *(_QWORD **)(a1 + 1208) == v26 )
                  *(_QWORD *)(a1 + 1208) = v37;
                --*(_QWORD *)(a1 + 1224);
                sub_10000C9E0(*(__int64 **)(a1 + 1216), v26);
                v46 = (void *)v26[266];
                if ( v46 )
                {
                  v26[267] = 0;
                  qfree(v46);
                }
                operator delete(v26);
                free_debug_event((__int64)&v62);
                v50 = 1;
LABEL_53:
                v26 = v37;
                if ( v37 == v51 )
                  goto LABEL_5;
                goto LABEL_54;
              }
            }
            else if ( v34 == *(_QWORD *)(v30 + 8 * ((v31 + *(_QWORD *)(a1 + 160)) / 0x38))
                           + 72 * ((v31 + *(_QWORD *)(a1 + 160)) % 0x38) )
            {
              goto LABEL_78;
            }
            if ( (*(_DWORD *)(v34 + 20) & 0xFFFFFFF) == 4 && *(_DWORD *)(v34 + 4) == v27 )
              goto LABEL_73;
            v35 += 72LL;
            v34 += 72LL;
            if ( *v33 == v35 )
            {
              v34 = v33[1];
              ++v33;
              goto LABEL_65;
            }
          }
        }
        v47 = 30090;
LABEL_98:
        if ( under_debugger != 1 )
          interr(v47);
LABEL_100:
        BUG();
      }
    }
  }
  v1 = 0;
  return v1 & 1;
}
// 10008FE10: using guessed type __int128 xmmword_10008FE10;
// 1000AE23D: using guessed type char under_debugger;
