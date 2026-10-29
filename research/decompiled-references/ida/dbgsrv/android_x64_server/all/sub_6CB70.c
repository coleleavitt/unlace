/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CB70
// Address: 0x000000000006CB70

//----- (000000000006CB70) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_6CB70(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 112) + a2;
  *(_QWORD *)(a1 + 112) = v2;
  if ( v2 >= *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) )
    sub_3A5C0("interr: bad idc move_ip");
}
