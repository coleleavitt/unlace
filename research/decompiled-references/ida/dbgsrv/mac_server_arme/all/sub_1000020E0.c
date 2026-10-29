/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000020E0
// Address: 0x00000001000020E0

//----- (00000001000020E0) ----------------------------------------------------
__int64 sub_1000020E0()
{
  __int64 v0; // x0
  char v1; // w21
  __int64 v2; // x19
  kern_return_t v3; // w0
  mach_msg_type_number_t v5; // w25
  __int64 *v6; // x24
  __int64 v7; // x20
  __int64 v8; // x9
  __int64 v9; // x8
  bool v10; // zf
  unsigned __int64 v11; // x8
  __int64 v12; // x11
  _QWORD *v13; // x9
  unsigned __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  char *v17; // x8
  char **v18; // x22
  char **v19; // x23
  int v20; // w8
  char *v21; // x21
  __int64 v22; // x8
  __int64 *v23; // x8
  __int64 **v24; // x22
  __int64 **v25; // x23
  int v26; // w8
  _DWORD *v27; // x1
  __int64 *v28; // x20
  int v29; // w26
  __int64 *v30; // x9
  __int64 **v31; // x8
  unsigned __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x10
  _QWORD *v35; // x11
  unsigned __int64 v36; // x12
  unsigned __int64 v37; // t1
  unsigned __int64 v38; // x13
  __int64 *v39; // x8
  __int64 *v40; // x26
  __int64 *v41; // x8
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  unsigned __int64 v46; // x9
  __int64 v47; // x0
  __int64 *v48; // x8
  __int64 *v49; // x9
  void *v50; // x0
  int v51; // w0
  __int64 **v52; // [xsp+28h] [xbp-1178h] BYREF
  __int64 *v53; // [xsp+30h] [xbp-1170h] BYREF
  __int64 v54; // [xsp+38h] [xbp-1168h]
  mach_msg_type_number_t act_listCnt; // [xsp+44h] [xbp-115Ch] BYREF
  thread_act_array_t act_list; // [xsp+48h] [xbp-1158h] BYREF
  _DWORD __src[517]; // [xsp+50h] [xbp-1150h] BYREF
  __int64 v58; // [xsp+868h] [xbp-938h]
  int v59; // [xsp+870h] [xbp-930h]
  void *v60; // [xsp+878h] [xbp-928h]
  __int128 v61; // [xsp+880h] [xbp-920h]
  char v62; // [xsp+890h] [xbp-910h]
  __int64 v63; // [xsp+898h] [xbp-908h] BYREF
  _QWORD v64[260]; // [xsp+8A0h] [xbp-900h] BYREF
  int v65; // [xsp+10C0h] [xbp-E0h]
  void *v66; // [xsp+10C8h] [xbp-D8h]
  __int128 v67; // [xsp+10D0h] [xbp-D0h]
  char v68; // [xsp+10E0h] [xbp-C0h]
  __int64 v69; // [xsp+10E8h] [xbp-B8h] BYREF
  __int64 v70; // [xsp+10F0h] [xbp-B0h]
  char v71; // [xsp+10F8h] [xbp-A8h]
  __int128 v72; // [xsp+10FCh] [xbp-A4h]
  __int128 v73; // [xsp+110Ch] [xbp-94h]
  __int128 v74; // [xsp+111Ch] [xbp-84h]
  int v75; // [xsp+112Ch] [xbp-74h]

  v0 = __chkstk_darwin();
  if ( (*(_BYTE *)(v0 + 1930) & 1) == 0 )
  {
    v2 = v0;
    v3 = task_threads(*(_DWORD *)(v0 + 1544), &act_list, &act_listCnt);
    v53 = nullptr;
    v54 = 0;
    v52 = &v53;
    if ( v3 )
    {
      v1 = 0;
LABEL_5:
      sub_10000BE98((__int64)&v52, v53);
      return v1 & 1;
    }
    if ( act_listCnt )
    {
      v1 = 0;
      v5 = 0;
      v6 = (__int64 *)(v2 + 1912);
      do
      {
        v7 = act_list[v5];
        v8 = *v6;
        if ( !*v6 )
          goto LABEL_18;
        v9 = v2 + 1912;
        do
        {
          if ( *(_DWORD *)(v8 + 32) >= (int)v7 )
            v9 = v8;
          v8 = *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 32) < (int)v7));
        }
        while ( v8 );
        if ( (__int64 *)v9 == v6 || (int)v7 < *(_DWORD *)(v9 + 32) )
        {
LABEL_18:
          v69 = 0xFFFFFFFFLL;
          v70 = -1;
          v71 = 0;
          v72 = 0u;
          v73 = 0u;
          v74 = 0u;
          v75 = 0;
          set_debug_event_code((__int64)&v69, 3);
          v10 = ((unsigned int)v72 & 0xFFFFFFF) - 9 < 2 || (v72 & 0xFFFFFFF) == 3;
          if ( !v10 )
          {
            if ( under_debugger != 1 )
              interr(3297);
            goto LABEL_105;
          }
          LODWORD(v69) = *(_DWORD *)(v2 + 528);
          HIDWORD(v69) = v7;
          v70 = -1;
          v71 = 1;
          v11 = *(_QWORD *)(v2 + 152);
          if ( !v11 )
          {
            sub_100009CC8(v2 + 120);
            v11 = *(_QWORD *)(v2 + 152);
          }
          v12 = *(_QWORD *)(v2 + 128);
          v13 = (_QWORD *)(v12 + 8 * (v11 / 0x38));
          v14 = *v13 + 72 * (v11 % 0x38);
          if ( *(_QWORD *)(v2 + 136) == v12 )
            v15 = 0;
          else
            v15 = v14;
          if ( v15 == *v13 )
            v15 = *(v13 - 1) + 4032LL;
          *(_QWORD *)(v15 - 72) = 0xFFFFFFFFLL;
          v16 = v15 - 72;
          *(_QWORD *)(v16 + 8) = -1;
          *(_BYTE *)(v16 + 16) = 0;
          *(_DWORD *)(v16 + 20) = 0;
          copy_debug_event(v16, (__int64)&v69);
          *(int64x2_t *)(v2 + 152) = vaddq_s64(*(int64x2_t *)(v2 + 152), (int64x2_t)xmmword_10007AB60);
          __src[0] = v7;
          __src[1] = v7;
          __src[4] = 0;
          v58 = 0;
          v59 = 0;
          __src[2] = 0;
          *(_DWORD *)((char *)&__src[2] + 3) = 0;
          v62 = 0;
          LODWORD(v63) = v7;
          memcpy(v64, __src, 0x814u);
          v64[259] = 0;
          v65 = 0;
          v66 = nullptr;
          v60 = nullptr;
          v67 = 0u;
          v61 = 0u;
          v68 = 0;
          v17 = *(char **)(v2 + 1912);
          v18 = (char **)(v2 + 1912);
          v19 = (char **)(v2 + 1912);
          if ( v17 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v19 = (char **)v17;
                v20 = *((_DWORD *)v17 + 8);
                if ( (int)v7 >= v20 )
                  break;
                v17 = *v19;
                v18 = v19;
                if ( !*v19 )
                  goto LABEL_37;
              }
              if ( v20 >= (int)v7 )
                break;
              v17 = v19[1];
              if ( !v17 )
              {
                v18 = v19 + 1;
                goto LABEL_37;
              }
            }
          }
          else
          {
LABEL_37:
            v21 = (char *)operator new(0x870u);
            *((_DWORD *)v21 + 8) = v7;
            memcpy(v21 + 40, __src, 0x814u);
            *((_QWORD *)v21 + 264) = v58;
            *((_DWORD *)v21 + 530) = v59;
            *((_QWORD *)v21 + 266) = 0;
            v66 = nullptr;
            *(_OWORD *)(v21 + 2136) = 0u;
            v67 = 0u;
            v21[2152] = 0;
            *(_OWORD *)v21 = 0u;
            *((_QWORD *)v21 + 2) = v19;
            *v18 = v21;
            v22 = **(_QWORD **)(v2 + 1904);
            if ( v22 )
            {
              *(_QWORD *)(v2 + 1904) = v22;
              v21 = *v18;
            }
            sub_10000BD00(*(__int64 **)(v2 + 1912), (__int64 *)v21);
            ++*(_QWORD *)(v2 + 1920);
            if ( v66 )
            {
              *(_QWORD *)&v67 = 0;
              qfree(v66);
              v66 = nullptr;
              *((_QWORD *)&v67 + 1) = 0;
            }
          }
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree(v60);
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 720LL))(v2, v7);
          free_debug_event((__int64)&v69);
          v1 = 1;
        }
        v23 = v53;
        v24 = &v53;
LABEL_46:
        v25 = v24;
        if ( v23 )
        {
          do
          {
            v24 = (__int64 **)v23;
            v26 = *((_DWORD *)v23 + 7);
            if ( (int)v7 < v26 )
            {
              v23 = *v24;
              goto LABEL_46;
            }
            if ( v26 >= (int)v7 )
              goto LABEL_10;
            v23 = v24[1];
          }
          while ( v23 );
          v25 = v24 + 1;
        }
        v27 = operator new(0x20u);
        v27[7] = v7;
        *(_QWORD *)v27 = 0;
        *((_QWORD *)v27 + 1) = 0;
        *((_QWORD *)v27 + 2) = v24;
        *v25 = (__int64 *)v27;
        if ( *v52 )
        {
          v52 = (__int64 **)*v52;
          v27 = *v25;
        }
        sub_10000BD00(v53, (__int64 *)v27);
        ++v54;
LABEL_10:
        ++v5;
      }
      while ( v5 < act_listCnt );
      if ( !mach_vm_deallocate(mach_task_self_, (mach_vm_address_t)act_list, 4LL * act_listCnt) )
      {
        v28 = *(__int64 **)(v2 + 1904);
        if ( v28 == v6 )
          goto LABEL_5;
LABEL_58:
        v29 = *((_DWORD *)v28 + 8);
        v30 = v53;
        if ( v53 )
        {
          v31 = &v53;
          do
          {
            if ( *((_DWORD *)v30 + 7) >= v29 )
              v31 = (__int64 **)v30;
            v30 = (__int64 *)v30[*((_DWORD *)v30 + 7) < v29];
          }
          while ( v30 );
          if ( v31 != &v53 && v29 >= *((_DWORD *)v31 + 7) )
          {
LABEL_77:
            v39 = (__int64 *)v28[1];
            if ( v39 )
            {
              do
              {
                v40 = v39;
                v39 = (__int64 *)*v39;
              }
              while ( v39 );
            }
            else
            {
              do
              {
                v41 = v28;
                v28 = (__int64 *)v28[2];
              }
              while ( (__int64 *)*v28 != v41 );
              v40 = v28;
            }
            goto LABEL_57;
          }
        }
        v32 = *(_QWORD *)(v2 + 152);
        v33 = *(_QWORD *)(v2 + 128);
        v34 = *(_QWORD *)(v2 + 136);
        v35 = (_QWORD *)(v33 + 8 * (v32 / 0x38));
        if ( v34 == v33 )
          v36 = 0;
        else
          v36 = *v35 + 72 * (v32 % 0x38);
LABEL_69:
        v38 = v36 - 4032;
        while ( 1 )
        {
          if ( v34 == v33 )
          {
            if ( !v36 )
            {
LABEL_82:
              v63 = 0xFFFFFFFFLL;
              v64[0] = -1;
              LOBYTE(v64[1]) = 0;
              *(_OWORD *)((char *)&v64[1] + 4) = 0u;
              *(_OWORD *)((char *)&v64[3] + 4) = 0u;
              *(_OWORD *)((char *)&v64[5] + 4) = 0u;
              HIDWORD(v64[7]) = 0;
              set_debug_event_code((__int64)&v63, 4);
              if ( (HIDWORD(v64[1]) & 0xFFFFFFF) != 2 && (HIDWORD(v64[1]) & 0xFFFFFFF) != 4 )
              {
                if ( under_debugger != 1 )
                  interr(3296);
LABEL_105:
                __break(1u);
              }
              v43 = *(_QWORD *)(v2 + 128);
              v10 = *(_QWORD *)(v2 + 136) == v43;
              v44 = 56 * ((unsigned __int64)(*(_QWORD *)(v2 + 136) - v43) >> 3) - 1;
              LODWORD(v64[2]) = 0;
              LODWORD(v63) = *(_DWORD *)(v2 + 528);
              HIDWORD(v63) = v29;
              v64[0] = -1;
              LOBYTE(v64[1]) = 1;
              if ( v10 )
                v45 = 0;
              else
                v45 = v44;
              v46 = *(_QWORD *)(v2 + 160) + *(_QWORD *)(v2 + 152);
              if ( v45 == v46 )
              {
                sub_10000A578(v2 + 120);
                v43 = *(_QWORD *)(v2 + 128);
                v46 = *(_QWORD *)(v2 + 160) + *(_QWORD *)(v2 + 152);
              }
              v47 = *(_QWORD *)(v43 + 8 * (v46 / 0x38)) + 72 * (v46 % 0x38);
              *(_QWORD *)v47 = 0xFFFFFFFFLL;
              *(_QWORD *)(v47 + 8) = -1;
              *(_BYTE *)(v47 + 16) = 0;
              *(_DWORD *)(v47 + 20) = 0;
              copy_debug_event(v47, (__int64)&v63);
              ++*(_QWORD *)(v2 + 160);
              v48 = (__int64 *)v28[1];
              v49 = v28;
              if ( v48 )
              {
                do
                {
                  v40 = v48;
                  v48 = (__int64 *)*v48;
                }
                while ( v48 );
              }
              else
              {
                do
                {
                  v40 = (__int64 *)v49[2];
                  v10 = *v40 == (_QWORD)v49;
                  v49 = v40;
                }
                while ( !v10 );
              }
              if ( *(__int64 **)(v2 + 1904) == v28 )
                *(_QWORD *)(v2 + 1904) = v40;
              --*(_QWORD *)(v2 + 1920);
              sub_10000BEF0(*(__int64 **)(v2 + 1912), v28);
              v50 = (void *)v28[266];
              if ( v50 )
              {
                v28[267] = 0;
                qfree(v50);
              }
              operator delete(v28);
              free_debug_event((__int64)&v63);
              v1 = 1;
LABEL_57:
              v28 = v40;
              if ( v40 == v6 )
                goto LABEL_5;
              goto LABEL_58;
            }
          }
          else if ( v36 == *(_QWORD *)(v33 + 8 * ((*(_QWORD *)(v2 + 160) + v32) / 0x38))
                         + 72 * ((*(_QWORD *)(v2 + 160) + v32) % 0x38) )
          {
            goto LABEL_82;
          }
          if ( (*(_DWORD *)(v36 + 20) & 0xFFFFFFF) == 4 && *(_DWORD *)(v36 + 4) == v29 )
            goto LABEL_77;
          v38 += 72LL;
          v36 += 72LL;
          if ( *v35 == v38 )
          {
            v37 = v35[1];
            ++v35;
            v36 = v37;
            goto LABEL_69;
          }
        }
      }
      if ( under_debugger == 1 )
        goto LABEL_105;
      v51 = 30090;
    }
    else
    {
      if ( under_debugger == 1 )
        goto LABEL_105;
      v51 = 30089;
    }
    interr(v51);
    goto LABEL_105;
  }
  v1 = 0;
  return v1 & 1;
}
// 10007AB60: using guessed type __int128 xmmword_10007AB60;
// 1000A590D: using guessed type char under_debugger;
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);
