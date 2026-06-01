__int64 __fastcall sub_1764E50(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  int v6; // eax
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  int v26; // [rsp+0h] [rbp-98h]
  __int64 v27; // [rsp+0h] [rbp-98h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int64 *v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 *v31; // [rsp+10h] [rbp-88h] BYREF
  int v32; // [rsp+18h] [rbp-80h]
  __int64 v33; // [rsp+20h] [rbp-78h] BYREF
  __int128 v34; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v36; // [rsp+50h] [rbp-48h]

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( result != 1 )
  {
    v4 = *a1;
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, *(_QWORD *)(a2 + 16) != v5) )
    {
      v6 = *(unsigned __int8 *)(a2 + 32);
      v7 = *(_DWORD *)(a2 + 24);
      v8 = *(_DWORD *)(a2 + 28);
      v34 = 0;
      v26 = v6;
      v9 = *(_QWORD *)(v4 + 248);
      *(_OWORD *)ptr = 0;
      v10 = *(_QWORD *)(v9 + 17504);
      v36 = 0;
      v11 = sub_2244B30("isa", 3);
      v12 = sub_2244CB0(v10, "isa", 3, v11);
      v14 = (__int64 *)(*(_QWORD *)v10 + 8LL * v12);
      if ( *v14 )
      {
        if ( *v14 != -8 )
        {
          sub_989490(&v31, v14, 0);
          v16 = *v31;
          v17 = *(__int64 **)(*v31 + 8);
          if ( !v17 )
            goto LABEL_7;
          goto LABEL_18;
        }
        --*(_DWORD *)(v10 + 16);
      }
      v23 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 104) += 20LL;
      v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v10 + 32) >= v24 + 20 && v23 )
      {
        *(_QWORD *)(v10 + 24) = v24 + 20;
      }
      else
      {
        v29 = v14;
        v24 = sub_986170(v10 + 24, 20, 20, 3, v13, (__int64)v14);
        v14 = v29;
      }
      *(_BYTE *)(v24 + 18) = 97;
      *(_WORD *)(v24 + 16) = 29545;
      *(_BYTE *)(v24 + 19) = 0;
      *(_QWORD *)v24 = 3;
      *(_QWORD *)(v24 + 8) = 0;
      *v14 = v24;
      ++*(_DWORD *)(v10 + 12);
      v25 = sub_22450D0(v10, v12);
      sub_989490(&v31, (__int64 *)(*(_QWORD *)v10 + 8LL * v25), 0);
      v16 = *v31;
      v17 = *(__int64 **)(*v31 + 8);
      if ( !v17 )
      {
LABEL_7:
        v18 = *(_QWORD *)(v10 + 120);
        if ( !v18
          || (v28 = v16,
              v19 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v18 + 16LL))(v18, "isa", 3),
              v16 = v28,
              v17 = (__int64 *)v19,
              (*(_QWORD *)(v28 + 8) = v19) == 0) )
        {
          v20 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 104) += 24LL;
          v17 = (__int64 *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v10 + 32) >= (unsigned __int64)(v17 + 3) && v20 )
          {
            *(_QWORD *)(v10 + 24) = v17 + 3;
            v21 = (__int64 *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            v30 = v16;
            v21 = (__int64 *)sub_986170(v10 + 24, 24, 24, 3, v15, v16);
            v16 = v30;
            v17 = v21;
          }
          v22 = *v21 & 0xFFFFF80000000000LL;
          v21[1] = 0;
          *v21 = v22 | 0x1FFFC05;
          *(_QWORD *)(v16 + 8) = v21;
          v21[2] = v16;
        }
      }
LABEL_18:
      v31 = v17;
      v32 = v7;
      sub_B85890(&v33, (__int64)v17);
      result = sub_19CC2F0(*a1, v5, *(_QWORD *)(v5 + 8), v8, v26, (unsigned int)&v34, 0, 0, (__int64)&v31, 0, 0, 0);
      if ( HIDWORD(ptr[1]) )
      {
        v27 = result;
        free(ptr[0]);
        return v27;
      }
    }
  }
  return result;
}
