__int64 __fastcall sub_9A9530(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  int v7; // ebp
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v24; // ebp
  __int64 *v25; // rdi
  __int64 v26; // rdx

  switch ( *((_DWORD *)a2 + 4) )
  {
    case 0:
      v14 = a2[1];
      v15 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v16 = *v15;
      v15[10] += 24;
      result = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[1] >= (unsigned __int64)(result + 24) && v16 )
        *v15 = result + 24;
      else
        result = sub_986170((__int64)v15, 24, 24, 3, a5, a6);
      *(_DWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = v14;
      *(_QWORD *)result = off_2B40320;
      break;
    case 1:
      v17 = a2[1];
      v18 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v19 = *v18;
      v18[10] += 24;
      result = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18[1] >= (unsigned __int64)(result + 24) && v19 )
        *v18 = result + 24;
      else
        result = sub_986170((__int64)v18, 24, 24, 3, a5, a6);
      *(_DWORD *)(result + 8) = 4;
      *(_QWORD *)(result + 16) = v17;
      *(_QWORD *)result = off_2B403C0;
      break;
    case 2:
      v20 = a2[1];
      v21 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v22 = *v21;
      v21[10] += 24;
      result = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v21[1] >= (unsigned __int64)(result + 24) && v22 )
        *v21 = result + 24;
      else
        result = sub_986170((__int64)v21, 24, 24, 3, a5, a6);
      *(_DWORD *)(result + 8) = 7;
      *(_QWORD *)(result + 16) = v20;
      *(_QWORD *)result = off_2B40438;
      break;
    case 3:
      result = sub_9A9860(a1, a2[1], 0, *a2);
      break;
    case 4:
      result = sub_9A9B90(a1, a2[1], *a2);
      break;
    case 5:
    case 6:
    case 9:
      v11 = a2[1];
      v12 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *v12;
      v12[10] += 24;
      result = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v12[1] >= (unsigned __int64)(result + 24) && v13 )
        *v12 = result + 24;
      else
        result = sub_986170((__int64)v12, 24, 24, 3, a5, a6);
      *(_DWORD *)(result + 8) = 2;
      *(_QWORD *)(result + 16) = v11;
      *(_QWORD *)result = off_2B40370;
      break;
    case 7:
      v23 = a2[1];
      v24 = *((_DWORD *)a2 + 5);
      v25 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v26 = *v25;
      v25[10] += 40;
      result = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v25[1] >= (unsigned __int64)(result + 40) && v26 )
        *v25 = result + 40;
      else
        result = sub_986170((__int64)v25, 40, 40, 3, a5, a6);
      *(_DWORD *)(result + 8) = 9;
      *(_QWORD *)(result + 16) = v23;
      *(_DWORD *)(result + 24) = v24;
      *(_QWORD *)result = off_2B40488;
      *(_QWORD *)(result + 32) = 0;
      break;
    case 8:
      v6 = a2[1];
      v7 = *((_DWORD *)a2 + 5);
      v8 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
      v9 = *v8;
      v8[10] += 32;
      result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8[1] >= (unsigned __int64)(result + 32) && v9 )
        *v8 = result + 32;
      else
        result = sub_986170((__int64)v8, 32, 32, 3, a5, a6);
      *(_DWORD *)(result + 8) = 10;
      *(_QWORD *)(result + 16) = v6;
      *(_DWORD *)(result + 24) = v7;
      *(_QWORD *)result = off_2B404B0;
      break;
  }
  return result;
}
