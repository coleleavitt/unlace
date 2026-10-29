__int64 __fastcall sub_103C520(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    v4 = *a2;
    do
    {
      if ( !sub_990D60(v4, "-fp-armv8") )
        *(_BYTE *)(a1 + 575) = 1;
      if ( !sub_990D60(v4, "-neon") )
        *(_BYTE *)(a1 + 576) = 1;
      if ( !sub_990D60(v4, "-sve") )
        *(_BYTE *)(a1 + 577) = 1;
      if ( !sub_990D60(v4, "+neon") || !sub_990D60(v4, "+fp-armv8") )
        *(_DWORD *)(a1 + 512) |= 2u;
      if ( !sub_990D60(v4, "+jscvt") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 573) = 1;
      }
      if ( !sub_990D60(v4, "+fcma") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 574) = 1;
      }
      if ( !sub_990D60(v4, "+sve") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sve2") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 532) = 1;
      }
      if ( !sub_990D60(v4, "+sve2p1") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_WORD *)(a1 + 532) = 257;
      }
      if ( !sub_990D60(v4, "+sve-aes") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 534) = 1;
      }
      if ( !sub_990D60(v4, "+sve2-sha3") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 532) = 1;
        *(_BYTE *)(a1 + 535) = 1;
      }
      if ( !sub_990D60(v4, "+sve2-sm4") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 532) = 1;
        *(_BYTE *)(a1 + 536) = 1;
      }
      if ( !sub_990D60(v4, "+sve-b16b16") )
        *(_BYTE *)(a1 + 537) = 1;
      if ( !sub_990D60(v4, "+sve-bitperm") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 538) = 1;
      }
      if ( !sub_990D60(v4, "+f32mm") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 540) = 1;
      }
      if ( !sub_990D60(v4, "+f64mm") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 539) = 1;
      }
      if ( !sub_990D60(v4, "+sme") )
      {
        *(_BYTE *)(a1 + 552) = 1;
        *(_BYTE *)(a1 + 531) = 1;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sme2") )
      {
        *(_BYTE *)(a1 + 531) = 1;
        *(_WORD *)(a1 + 552) = 257;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sme2p1") )
      {
        *(_BYTE *)(a1 + 558) = 1;
        *(_WORD *)(a1 + 552) = 257;
        *(_BYTE *)(a1 + 531) = 1;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sme-f64f64") )
      {
        *(_BYTE *)(a1 + 552) = 1;
        *(_BYTE *)(a1 + 554) = 1;
        *(_BYTE *)(a1 + 531) = 1;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sme-i16i64") )
      {
        *(_BYTE *)(a1 + 552) = 1;
        *(_BYTE *)(a1 + 555) = 1;
        *(_BYTE *)(a1 + 531) = 1;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+sme-fa64") )
      {
        *(_DWORD *)(a1 + 512) |= 6u;
        *(_BYTE *)(a1 + 552) = 1;
        *(_BYTE *)(a1 + 532) = 1;
        *(_BYTE *)(a1 + 581) = 1;
      }
      if ( !sub_990D60(v4, "+sme-f16f16") )
      {
        *(_BYTE *)(a1 + 531) = 1;
        *(_WORD *)(a1 + 552) = 257;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 556) = 1;
      }
      if ( !sub_990D60(v4, "+sme-b16b16") )
      {
        *(_BYTE *)(a1 + 531) = 1;
        *(_WORD *)(a1 + 552) = 257;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 537) = 1;
        *(_BYTE *)(a1 + 557) = 1;
      }
      if ( !sub_990D60(v4, "+fp8") )
        *(_BYTE *)(a1 + 559) = 1;
      if ( !sub_990D60(v4, "+fp8fma") )
        *(_BYTE *)(a1 + 560) = 1;
      if ( !sub_990D60(v4, "+fp8dot2") )
        *(_BYTE *)(a1 + 561) = 1;
      if ( !sub_990D60(v4, "+fp8dot4") )
        *(_BYTE *)(a1 + 562) = 1;
      if ( !sub_990D60(v4, "+ssve-fp8dot2") )
        *(_BYTE *)(a1 + 563) = 1;
      if ( !sub_990D60(v4, "+ssve-fp8dot4") )
        *(_BYTE *)(a1 + 564) = 1;
      if ( !sub_990D60(v4, "+ssve-fp8fma") )
        *(_BYTE *)(a1 + 565) = 1;
      if ( !sub_990D60(v4, "+sme-f8f32") )
        *(_BYTE *)(a1 + 566) = 1;
      if ( !sub_990D60(v4, "+sme-f8f16") )
        *(_BYTE *)(a1 + 567) = 1;
      if ( !sub_990D60(v4, "+sb") )
        *(_BYTE *)(a1 + 568) = 1;
      if ( !sub_990D60(v4, "+predres") )
        *(_BYTE *)(a1 + 569) = 1;
      if ( !sub_990D60(v4, "+ssbs") )
        *(_BYTE *)(a1 + 570) = 1;
      if ( !sub_990D60(v4, "+bti") )
        *(_BYTE *)(a1 + 571) = 1;
      if ( !sub_990D60(v4, "+wfxt") )
        *(_BYTE *)(a1 + 572) = 1;
      if ( !sub_990D60(v4, "-fmv") )
        *(_BYTE *)(a1 + 578) = 0;
      if ( !sub_990D60(v4, "+crc") )
        *(_BYTE *)(a1 + 516) = 1;
      if ( !sub_990D60(v4, "+rcpc") )
        *(_BYTE *)(a1 + 546) = 1;
      if ( !sub_990D60(v4, "+aes") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 518) = 1;
      }
      if ( !sub_990D60(v4, "+sha2") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 519) = 1;
      }
      if ( !sub_990D60(v4, "+sha3") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_WORD *)(a1 + 519) = 257;
      }
      if ( !sub_990D60(v4, "+rdm") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 547) = 1;
      }
      if ( !sub_990D60(v4, "+dit") )
        *(_BYTE *)(a1 + 548) = 1;
      if ( !sub_990D60(v4, "+cccp") )
        *(_BYTE *)(a1 + 549) = 1;
      if ( !sub_990D60(v4, "+ccdp") )
        *(_WORD *)(a1 + 549) = 257;
      if ( !sub_990D60(v4, "+fptoint") )
        *(_BYTE *)(a1 + 551) = 1;
      if ( !sub_990D60(v4, "+sm4") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 521) = 1;
      }
      if ( !sub_990D60(v4, "+strict-align") )
        *(_BYTE *)(a1 + 393) &= ~0x10u;
      if ( !sub_990D60(v4, "+v8a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E520) )
        *(_QWORD *)(a1 + 584) = dword_2B2E520;
      if ( !sub_990D60(v4, "+v8.1a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E460) )
        *(_QWORD *)(a1 + 584) = dword_2B2E460;
      if ( !sub_990D60(v4, "+v8.2a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E400) )
        *(_QWORD *)(a1 + 584) = dword_2B2E400;
      if ( !sub_990D60(v4, "+v8.3a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E3A0) )
        *(_QWORD *)(a1 + 584) = dword_2B2E3A0;
      if ( !sub_990D60(v4, "+v8.4a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E340) )
        *(_QWORD *)(a1 + 584) = dword_2B2E340;
      if ( !sub_990D60(v4, "+v8.5a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E2E0) )
        *(_QWORD *)(a1 + 584) = dword_2B2E2E0;
      if ( !sub_990D60(v4, "+v8.6a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E280) )
        *(_QWORD *)(a1 + 584) = dword_2B2E280;
      if ( !sub_990D60(v4, "+v8.7a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E220) )
        *(_QWORD *)(a1 + 584) = dword_2B2E220;
      if ( !sub_990D60(v4, "+v8.8a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E1C0) )
        *(_QWORD *)(a1 + 584) = dword_2B2E1C0;
      if ( !sub_990D60(v4, "+v8.9a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E160) )
        *(_QWORD *)(a1 + 584) = dword_2B2E160;
      if ( !sub_990D60(v4, "+v9a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E100) )
        *(_QWORD *)(a1 + 584) = dword_2B2E100;
      if ( !sub_990D60(v4, "+v9.1a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E0A0) )
        *(_QWORD *)(a1 + 584) = dword_2B2E0A0;
      if ( !sub_990D60(v4, "+v9.2a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2E040) )
        *(_QWORD *)(a1 + 584) = dword_2B2E040;
      if ( !sub_990D60(v4, "+v9.3a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2DFE0) )
        *(_QWORD *)(a1 + 584) = dword_2B2DFE0;
      if ( !sub_990D60(v4, "+v9.4a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2DF80) )
        *(_QWORD *)(a1 + 584) = dword_2B2DF80;
      if ( !sub_990D60(v4, "+v9.5a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2DF20) )
        *(_QWORD *)(a1 + 584) = dword_2B2DF20;
      if ( !sub_990D60(v4, "+v9.6a") && (unsigned __int8)sub_9E60E0(*(unsigned int **)(a1 + 584), dword_2B2DEC0) )
        *(_QWORD *)(a1 + 584) = dword_2B2DEC0;
      if ( !sub_990D60(v4, "+v8r") )
        *(_QWORD *)(a1 + 584) = &unk_2B2E4C0;
      if ( !sub_990D60(v4, "+fullfp16") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 522) = 1;
      }
      if ( !sub_990D60(v4, "+dotprod") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 523) = 1;
      }
      if ( !sub_990D60(v4, "+fp16fml") )
      {
        *(_DWORD *)(a1 + 512) |= 2u;
        *(_BYTE *)(a1 + 522) = 1;
        *(_BYTE *)(a1 + 524) = 1;
      }
      if ( !sub_990D60(v4, "+mte") )
        *(_BYTE *)(a1 + 525) = 1;
      if ( !sub_990D60(v4, "+tme") )
        *(_BYTE *)(a1 + 526) = 1;
      if ( !sub_990D60(v4, "+pauth") )
        *(_BYTE *)(a1 + 527) = 1;
      if ( !sub_990D60(v4, "+i8mm") )
        *(_BYTE *)(a1 + 530) = 1;
      if ( !sub_990D60(v4, "+bf16") )
        *(_BYTE *)(a1 + 531) = 1;
      if ( !sub_990D60(v4, "+lse") )
        *(_BYTE *)(a1 + 541) = 1;
      if ( !sub_990D60(v4, "+ls64") )
        *(_BYTE *)(a1 + 528) = 1;
      if ( !sub_990D60(v4, "+rand") )
        *(_BYTE *)(a1 + 529) = 1;
      if ( !sub_990D60(v4, "+flagm") )
        *(_BYTE *)(a1 + 542) = 1;
      if ( !sub_990D60(v4, "+altnzcv") )
        *(_WORD *)(a1 + 542) = 257;
      if ( !sub_990D60(v4, "+mops") )
        *(_BYTE *)(a1 + 544) = 1;
      if ( !sub_990D60(v4, "+d128") )
        *(_BYTE *)(a1 + 545) = 1;
      if ( !sub_990D60(v4, "+gcs") )
        *(_BYTE *)(a1 + 579) = 1;
      if ( !sub_990D60(v4, "+rcpc3") )
        *(_BYTE *)(a1 + 580) = 1;
      if ( !sub_990D60(v4, "+pauth-lr") )
      {
        *(_BYTE *)(a1 + 582) = 1;
        *(_BYTE *)(a1 + 527) = 1;
      }
      if ( !sub_990D60(v4, "+cssc") )
        *(_BYTE *)(a1 + 517) = 1;
      v4 += 32;
    }
    while ( v3 != v4 );
    do
    {
      if ( !sub_990D60(v2, "-d128") )
        *(_BYTE *)(a1 + 545) = 0;
      v2 += 32;
    }
    while ( v3 != v2 );
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 984LL))(a1);
  if ( *(_BYTE *)(a1 + 575) )
    *(_DWORD *)(a1 + 512) &= 0xFFFFFFF8;
  if ( *(_BYTE *)(a1 + 576) )
    *(_DWORD *)(a1 + 512) &= 0xFFFFFFF9;
  if ( *(_BYTE *)(a1 + 577) )
    *(_DWORD *)(a1 + 512) &= ~4u;
  return 1;
}

