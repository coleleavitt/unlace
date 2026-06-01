_DWORD *__fastcall sub_1EEE8E0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  const void *v13; // rcx
  size_t v14; // r8
  __int64 v15; // r12
  char v16; // bl
  void *v17; // rax
  size_t v18; // rax
  unsigned __int64 v19; // rdx
  __int64 *v20; // rbp
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // [rsp+10h] [rbp-2C8h]
  __int64 v29; // [rsp+10h] [rbp-2C8h]
  __int64 v30; // [rsp+10h] [rbp-2C8h]
  _QWORD *v31; // [rsp+18h] [rbp-2C0h]
  __int64 v32; // [rsp+20h] [rbp-2B8h]
  unsigned int v33; // [rsp+28h] [rbp-2B0h]
  char v34; // [rsp+2Ch] [rbp-2ACh]
  size_t v35; // [rsp+30h] [rbp-2A8h]
  const void *v36; // [rsp+38h] [rbp-2A0h]
  _QWORD *v37; // [rsp+48h] [rbp-290h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-288h] BYREF
  void *v39; // [rsp+60h] [rbp-278h] BYREF
  char v40; // [rsp+68h] [rbp-270h]
  char *v41; // [rsp+70h] [rbp-268h] BYREF
  __int64 v42; // [rsp+78h] [rbp-260h]
  _QWORD *v43; // [rsp+80h] [rbp-258h] BYREF
  char v44; // [rsp+88h] [rbp-250h]
  void *ptr[2]; // [rsp+90h] [rbp-248h] BYREF
  _BYTE v46[568]; // [rsp+A0h] [rbp-238h] BYREF

  v2 = *((_QWORD *)sub_1EAEBA0((__int64)(a1 + 629), a2) + 1);
  v3 = *(_QWORD *)(v2 + 2544) + 20LL * (a2 - *(_DWORD *)(v2 + 2504));
  v4 = *(_DWORD **)(a1[17] + 2896LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v2 + 2168);
    v6 = *(unsigned int *)(v2 + 2184);
    v38[0] = v2 + 2152;
    v7 = 8 * v5 - v6;
    v8 = *(_QWORD *)(v2 + 2088) + *(unsigned int *)(v3 + 16);
    v38[1] = v7;
    sub_1EAF7C0((__int64 *)ptr, v2 + 2152, v8);
    v4 = ptr[0];
    if ( ptr[0] )
    {
      sub_1EBF0A0((__int64)a1, (_QWORD **)ptr);
      if ( ptr[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
      v4 = nullptr;
    }
    else
    {
      sub_1EAFB80((__int64)&v39, v2 + 2152, 1);
      if ( (v40 & 1) != 0 )
      {
        v17 = v39;
        v39 = nullptr;
        ptr[0] = v17;
        sub_1EBF0A0((__int64)a1, (_QWORD **)ptr);
        if ( ptr[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
      }
      else if ( (_DWORD)v39 == 3 )
      {
        v28 = HIDWORD(v39);
        LODWORD(v32) = sub_1EE4770((__int64)a1, v2, *(_QWORD *)(v3 + 8));
        v33 = sub_1EE4770((__int64)a1, v2, *(_QWORD *)v3);
        v10 = a1[17];
        v41 = nullptr;
        v42 = 0;
        v11 = *(_QWORD **)(v10 + 2896);
        ptr[1] = (void *)0x4000000000LL;
        v31 = v11;
        ptr[0] = v46;
        sub_2027F10(&v43, v2 + 2152, v28, ptr, &v41);
        if ( (v44 & 1) != 0 )
        {
          v24 = v43;
          v43 = nullptr;
          v37 = v24;
          sub_1EBF0A0((__int64)a1, &v37);
          if ( v37 )
            (*(void (__fastcall **)(_QWORD *))(*v37 + 8LL))(v37);
        }
        else if ( (_DWORD)v43 == 1 )
        {
          v30 = sub_1EE2BD0(a1, v2, *(_QWORD *)ptr[0]);
          v22 = sub_1EC2080(v31 + 2, 24, 3u);
          *(_DWORD *)v22 = 2;
          v4 = (_DWORD *)v22;
          *(_QWORD *)(v22 + 16) = v30;
          *(_DWORD *)(v22 + 4) = v33;
          *(_DWORD *)(v22 + 8) = v32;
          v23 = a1[8];
          if ( v23 )
            (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)v23 + 72LL))(v23, a2 + 1, v22);
        }
        else if ( (_DWORD)v43 )
        {
          v12 = ptr[0];
          v13 = v41;
          v14 = *(_QWORD *)ptr[0];
          if ( v42 != *(_QWORD *)ptr[0] )
          {
            v27 = sub_12ED8B0(*(_QWORD *)(a1[17] + 80LL), &v41[*(_QWORD *)ptr[0]], v42 - *(_QWORD *)ptr[0], 0, 1u);
            v13 = v41;
            v4 = (_DWORD *)v27;
            v12 = ptr[0];
            v14 = *(_QWORD *)ptr[0];
          }
          v15 = v12[2];
          v29 = (__int64)v4;
          v16 = v12[3] != 0;
          v36 = v13;
          v35 = v14;
          v34 = v12[1] != 0;
          v4 = (_DWORD *)sub_1EC2080(v31 + 2, 48, 3u);
          sub_145A690((__int64)v4, v31, v15, v36, v35, v34, v16, v29, (v32 << 32) | v33);
        }
        else
        {
          v19 = *((_QWORD *)ptr[0] + 1);
          v20 = v31 + 2;
          if ( *(_QWORD *)ptr[0] )
          {
            v21 = sub_1EE2BD0(a1, v2, v19);
            v4 = (_DWORD *)sub_1EC2080(v20, 24, 3u);
            *v4 = 1;
            v4[1] = v33;
            *((_QWORD *)v4 + 2) = v21 & 0xFFFFFFFFFFFFFFFBLL;
          }
          else
          {
            v25 = sub_1EE46C0((__int64)a1, v2, v19);
            v26 = sub_145B0E0((__int64)v31, v25 - 1);
            v4 = (_DWORD *)sub_1EC2080(v20, 24, 3u);
            *v4 = 1;
            v4[1] = v33;
            *((_QWORD *)v4 + 2) = v26 | 4;
          }
          v4[2] = v32;
        }
        sub_A0AE90((__int64 *)&v43);
        if ( ptr[0] != v46 )
          free(ptr[0]);
      }
      sub_A0B030((__int64 *)&v39);
    }
    sub_1EAF840((__int64)v38);
  }
  else
  {
    v18 = j__strlen("no preprocessing record");
    sub_1EAD680((__int64)a1, "no preprocessing record", v18);
  }
  return v4;
}
