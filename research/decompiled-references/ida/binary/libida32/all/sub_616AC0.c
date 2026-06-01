unsigned __int64 __fastcall sub_616AC0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h] BYREF
  int v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+20h] [rbp-48h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v6 = *a5;
    if ( *a5 > 0x2F )
    {
      v7 = *((_QWORD **)a5 + 1);
      *((_QWORD *)a5 + 1) = v7 + 1;
    }
    else
    {
      v7 = (_QWORD *)(*((_QWORD *)a5 + 2) + v6);
      *a5 = v6 + 8;
    }
    if ( *v7 == a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_DWORD *)(v8 + 28);
      if ( v9 > 0 )
      {
        v10 = 0;
        v35 = v9;
        while ( 1 )
        {
          v14 = *(__int64 **)(switch_dbctx(*(int *)(v8 + 4LL * (int)v10 + 16)) + 1480);
          v15 = *v14;
          v37 = v15;
          v38 = v15 ? *(_DWORD *)(v15 + 1332) : -1;
          v39 = v15 + 552;
          *(_WORD *)(a1 + 2 * v10 + 148) = sub_614CE0((__int64)&v37, (__int64)&unk_2B0B920, 0, v11, v12, v13);
          v19 = *v14;
          v37 = v19;
          v38 = v19 ? *(_DWORD *)(v19 + 1332) : -1;
          v39 = v19 + 552;
          *(_BYTE *)(a1 + v10 + 154) = sub_614CE0((__int64)&v37, (__int64)&unk_2B0B920 - 128, 0, v16, v17, v18);
          v23 = *v14;
          v37 = v23;
          v38 = v23 ? *(_DWORD *)(v23 + 1332) : -1;
          v39 = v23 + 552;
          *(_BYTE *)(a1 + v10++ + 157) = sub_614CE0((__int64)&v37, (__int64)&unk_2B0B960, 0, v20, v21, v22);
          if ( v35 == v10 )
            break;
          v8 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  else if ( a2 == 8 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(_DWORD *)(v24 + 28);
    if ( v25 > 0 )
    {
      v26 = 0;
      v36 = v25;
      while ( 1 )
      {
        v27 = switch_dbctx(*(int *)(v24 + 4LL * (int)v26 + 16));
        v28 = *(__int16 *)(a1 + 2 * v26 + 148);
        v29 = *(__int64 **)(v27 + 1480);
        v30 = *v29;
        v37 = v30;
        v38 = v30 ? *(_DWORD *)(v30 + 1332) : -1;
        v39 = v30 + 552;
        sub_615840((__int64)&v37, (__int64)&unk_2B0B920, v28, 47, 1);
        v31 = *v29;
        v32 = *(unsigned __int8 *)(a1 + v26 + 154);
        v37 = v31;
        v38 = v31 ? *(_DWORD *)(v31 + 1332) : -1;
        v39 = v31 + 552;
        sub_615840((__int64)&v37, (__int64)&unk_2B0B920 - 128, v32, 45, 1);
        v33 = *v29;
        v34 = *(unsigned __int8 *)(a1 + v26 + 157);
        v37 = v33;
        v38 = v33 ? *(_DWORD *)(v33 + 1332) : -1;
        v39 = v33 + 552;
        ++v26;
        sub_615840((__int64)&v37, (__int64)&unk_2B0B960, v34, 48, 1);
        if ( v36 == v26 )
          break;
        v24 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}

