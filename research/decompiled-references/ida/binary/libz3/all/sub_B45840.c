__int64 __fastcall sub_B45840(__int64 a1, unsigned int a2)
{
  __int64 v3; // r13
  unsigned int v4; // eax
  _QWORD *v5; // r12
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r14
  int v12; // eax
  __int64 ****v13; // r13
  __int64 ***v14; // rdx
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 result; // rax
  __int64 *v26; // rdx
  __int64 v27; // r14
  int v28; // eax
  __int64 *v29; // rdx
  __int64 v30; // r14
  __int64 ***v31; // r13
  __int64 **v32; // r14
  __int64 v33; // rbx
  char v34; // al
  _QWORD *v35; // rax
  __int64 *v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+10h] [rbp-58h]
  unsigned int v39; // [rsp+14h] [rbp-54h]
  __int64 ***v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+20h] [rbp-48h]
  char v42[8]; // [rsp+28h] [rbp-40h] BYREF
  int v43; // [rsp+30h] [rbp-38h]
  int v44; // [rsp+38h] [rbp-30h]
  int v45; // [rsp+40h] [rbp-28h]
  void *v46; // [rsp+48h] [rbp-20h]

  do
  {
    v3 = a2;
    v4 = a2;
    a2 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * a2);
  }
  while ( v4 != a2 );
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v3);
  v6 = sub_15D1F10(*v5);
  v11 = sub_15FDC30((int)a1 + 56, v6, v7, v8, v9, v10);
  v12 = sub_15F0BF0(a1 + 56, v11);
  v13 = *(__int64 *****)(*(_QWORD *)(a1 + 232) + 8 * v3);
  ++*(_DWORD *)(a1 + 364);
  v14 = *v13;
  if ( !*v13 || !*((_DWORD *)v14 - 1) || (v26 = (__int64 *)v14[v12]) == nullptr )
  {
    v15 = sub_15F0A30(a1 + 56, v11);
LABEL_5:
    v18 = *(_QWORD *)(a1 + 24);
    v19 = sub_15DC610(v18, v15, 1, (int)v42, v16, v17, (int)v36, v37, v38, (int)v40, v41, *v5, v43, v44, v45, v46);
    v20 = (unsigned int *)v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    sub_B6F780(*(_QWORD *)(a1 + 16));
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(unsigned int *)(*(_QWORD *)(v21 + 8832) + 4LL * *v20);
    sub_8F18B0(v21, *(_DWORD *)(*(_QWORD *)(v21 + 8832) + 4LL * *v20));
    v23 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 7488) + 48LL))(
      *(_QWORD *)(v23 + 7488),
      *(_QWORD *)(*(_QWORD *)(v23 + 8840) + 8 * v22));
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 7488) + 64LL))(*(_QWORD *)(v23 + 7488));
    if ( v20[2]-- == 1 )
      return sub_15D7BC0(v18, v20);
    return result;
  }
  v27 = *(_QWORD *)(a1 + 16);
  v36 = v26;
  v37 = *v26;
  v28 = sub_8E7030(v27);
  v29 = v36;
  if ( v28 )
  {
    v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v27 + 7488) + 56LL))(*(_QWORD *)(v27 + 7488), v37);
    v30 = *(_QWORD *)(a1 + 16);
    v29 = v36;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v30 + 7488) + 48LL))(*(_QWORD *)(v30 + 7488), *v36);
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 7488) + 64LL))(*(_QWORD *)(v30 + 7488));
    }
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 16);
  }
  result = sub_8E81B0((_QWORD *)v30, v29);
  if ( (_DWORD)result == -1 )
  {
    v31 = *v13;
    if ( v31 )
    {
      result = (__int64)&v31[*((unsigned int *)v31 - 1)];
      v40 = (__int64 ***)result;
      if ( (__int64 ***)result != v31 )
      {
        v39 = 0;
        while ( 1 )
        {
          v32 = *v31;
          if ( !*v31 )
            break;
          v36 = *v32;
          v37 = *(_QWORD *)(a1 + 16);
          if ( (unsigned int)sub_8E7030(v37)
            && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v37 + 7488) + 56LL))(
                  *(_QWORD *)(v37 + 7488),
                  v36) )
          {
            v33 = *(_QWORD *)(a1 + 16);
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v33 + 7488) + 48LL))(
              *(_QWORD *)(v33 + 7488),
              *v32);
            return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 7488) + 64LL))(*(_QWORD *)(v33 + 7488));
          }
          result = sub_8E81B0(*(_QWORD **)(a1 + 16), v32);
          if ( (_DWORD)result == -1 )
          {
            result = (__int64)v40;
            ++v31;
            ++v39;
            if ( v31 != v40 )
              continue;
          }
          return result;
        }
        v35 = (_QWORD *)sub_15F6BE0(a1 + 56, v6);
        result = sub_15F0A30(a1 + 56, *(_QWORD *)(*v35 + 8LL * v39));
        v15 = result;
        if ( result )
          goto LABEL_5;
      }
    }
  }
  return result;
}

