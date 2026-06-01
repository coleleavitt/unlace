__int64 __fastcall sub_1890970(__int64 a1, __int64 a2, unsigned __int64 a3, __m128 a4, double a5)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r15
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  int v26; // eax
  char *v27; // rax
  char *v28; // r9
  int v29; // r10d
  unsigned __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rdi
  int v33; // esi
  unsigned int v34; // edx
  __int64 *v35; // r9
  __int64 v36; // r10
  _QWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rax
  int v40; // r9d
  char *v41; // r10
  int v42; // r9d
  int v43; // r11d
  __int64 v44; // r10
  __int64 v45; // [rsp+10h] [rbp-48h] BYREF
  __int64 v46[8]; // [rsp+18h] [rbp-40h] BYREF

  result = sub_183C740(a1, (_DWORD *)a3);
  v12 = result;
  v13 = BYTE1(result);
  if ( (_BYTE)result == 6 )
  {
    if ( !BYTE1(result) )
      return result;
  }
  else if ( !BYTE1(result) )
  {
    goto LABEL_3;
  }
  v45 = *(_QWORD *)(**(_QWORD **)(a3 + 120) + 48LL);
  v15 = sub_C1BEF0((__int64)&v45, a3, v10, v11);
  v20 = sub_F63270(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a3, v16, v17, v18, v19);
  if ( v20 )
  {
    v25 = sub_B7E900((__int64)v20, a3, v21, v22, v23, v24);
    if ( v25 )
    {
LABEL_10:
      v26 = *(_DWORD *)(a1 + 3936);
      v46[0] = v25;
      if ( v26 )
      {
        v31 = *(_DWORD *)(a1 + 3944);
        v32 = *(_QWORD *)(a1 + 3928);
        if ( !v31 )
          goto LABEL_16;
        v33 = v31 - 1;
        v34 = (v31 - 1) & (((unsigned int)v25 >> 9) ^ ((unsigned int)v25 >> 4));
        v35 = (__int64 *)(v32 + 8LL * v34);
        v36 = *v35;
        if ( *v35 != v25 )
        {
          v42 = 1;
          if ( v36 == -4096 )
            goto LABEL_16;
          while ( 1 )
          {
            v43 = v42 + 1;
            v34 = v33 & (v42 + v34);
            v35 = (__int64 *)(v32 + 8LL * v34);
            v44 = *v35;
            if ( *v35 == v25 )
              break;
            v42 = v43;
            if ( v44 == -4096 )
              goto LABEL_16;
          }
        }
        *v35 = -8192;
        *(_DWORD *)(a1 + 3936) = v26 - 1;
        v37 = *(_QWORD **)(a1 + 3952);
        v38 = *(unsigned int *)(a1 + 3960);
        ++*(_DWORD *)(a1 + 3940);
        v39 = sub_18382E0(v37, (__int64)&v37[v38], v46);
        if ( v41 != (char *)(v39 + 1) )
        {
          memmove(v39, v39 + 1, v41 - (char *)(v39 + 1));
          v40 = *(_DWORD *)(a1 + 3960);
        }
        *(_DWORD *)(a1 + 3960) = v40 - 1;
      }
      else
      {
        v27 = (char *)sub_18382E0(
                        *(_QWORD **)(a1 + 3952),
                        *(_QWORD *)(a1 + 3952) + 8LL * *(unsigned int *)(a1 + 3960),
                        v46);
        if ( v28 != v27 )
        {
          if ( v28 != v27 + 8 )
          {
            memmove(v27, v27 + 8, v28 - (v27 + 8));
            v29 = *(_DWORD *)(a1 + 3960);
          }
          *(_DWORD *)(a1 + 3960) = v29 - 1;
        }
      }
LABEL_16:
      while ( 1 )
      {
        v30 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v25 = v30;
        if ( !v30 )
          break;
        if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_10;
      }
    }
  }
  if ( v12 == 6 )
  {
    result = sub_188F170(a1, a2, a3, v13, a4, a5);
    if ( !(_BYTE)result )
      return result;
    return sub_B88650(a3, 1);
  }
LABEL_3:
  v14 = 0;
  if ( (*(_BYTE *)(a3 + 83) & 4) != 0 )
    v14 = *(_DWORD *)(a3 + 144);
  result = sub_188C9F0(a1, a3, v12, v14);
  if ( (_BYTE)result )
    return sub_B88650(a3, 1);
  return result;
}
